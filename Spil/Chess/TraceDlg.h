#pragma once

#include <SynchronizedQueue.h>
#include <MFCUTIL/LayoutManager.h>

class CTraceDlgThread;

class CTraceDlg : public CDialog, OptionsAccessor {
private:
  HICON                     m_hIcon;
  SimpleLayoutManager       m_layoutManager;
  bool                      m_initDone;
  UINT                      m_timerCount;
  SynchronizedQueue<String> m_textQueue;
  CEdit                    *m_textBox;
  CEdit                    *m_messageField;
  CTraceDlgThread          &m_thread;
  // index into text in m_textBox
  UINT                      m_caretPos;
  void scrollToBottom();
  void setFontSize(int pct, bool redraw);
public:
  CTraceDlg(CTraceDlgThread &thread);
  void print(const String &s);
  void updateMessageField(const String &s);
  void clear();
  void reposition();

  enum { IDD = IDD_TRACE_DIALOG };
  BOOL  m_keepText;

protected:
  virtual void DoDataExchange(CDataExchange *pDX);
  virtual BOOL    OnInitDialog();
  afx_msg void    OnMove(              int x, int y);
  afx_msg void    OnSize(              UINT nType, int cx, int cy);
  afx_msg void    OnClose();
  afx_msg void    OnCancel();
  afx_msg void    OnShowWindow(BOOL bShow, UINT nStatus);
  afx_msg void    OnTimer(UINT_PTR nIDEvent);
  afx_msg void    OnButtonhide();
  afx_msg void    OnButtonClear();
  afx_msg void    OnCheckKeepText();
  afx_msg void    OnFontsize75();
  afx_msg void    OnFontsize100();
  afx_msg void    OnFontsize125();
  afx_msg void    OnFontsize150();
  afx_msg void    OnFontsize175();
  afx_msg void    OnFontsize200();
  afx_msg void    OnViewInfofields();
  afx_msg LRESULT OnMsgPrintText(         WPARAM wp, LPARAM lp);
  afx_msg LRESULT OnMsgUpdateMessageField(WPARAM wp, LPARAM lp);
  afx_msg LRESULT OnMsgClearTrace(        WPARAM wp, LPARAM lp);
  afx_msg LRESULT OnMsgReposition(        WPARAM wp, LPARAM lp);
  DECLARE_MESSAGE_MAP()
};

