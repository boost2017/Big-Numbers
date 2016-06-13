#pragma once

#include <MatrixTemplate.h>
#include <VectorTemplate.h>
#include "BigReal.h"

class BigRealVector : public VectorTemplate<BigReal> {
private:
  DECLARECLASSNAME;
  unsigned int m_digits;
  void checkPrecision(unsigned int digits);
protected:
  void init(size_t dim, bool initialize, int digits);

public:
  explicit BigRealVector(size_t dim = 1, unsigned int digits = 16);
  BigRealVector(const BigRealVector &v);
  BigRealVector(const VectorTemplate<BigReal> &v, unsigned int digits);
  unsigned int setPrecision(unsigned int digits);
  unsigned int getPrecision() const {
    return m_digits;
  }
  BigRealVector &operator*=(const BigReal &d);
  BigRealVector &operator/=(const BigReal &d);
  BigRealVector &operator+=(const BigRealVector &rhs);
  BigRealVector &operator-=(const BigRealVector &rhs);
  BigReal length() const;
  friend class BigRealMatrix;
  void invalidDimensionError(const TCHAR *method, const BigRealVector &rhs) const;
};

BigRealVector  operator*(const BigReal &d, const BigRealVector &rhs );
BigRealVector  operator*(const BigRealVector &lts, const BigReal &d );
BigRealVector  operator/(const BigRealVector &lts, const BigReal &d );
BigRealVector  operator+(const BigRealVector &lts, const BigRealVector& rhs);
BigRealVector  operator-(const BigRealVector &lts, const BigRealVector& rhs);
BigReal        operator*(const BigRealVector &lts, const BigRealVector& rhs);

class BigRealMatrix : public MatrixTemplate<BigReal> {
private:
  DECLARECLASSNAME;
protected:
  unsigned int m_digits;
  void checkPrecision(unsigned int digits);
  void init(size_t rows, size_t cols, bool initialize, unsigned int digits);
public:
  explicit BigRealMatrix(size_t rows = 1, size_t cols = 1, unsigned int digits = 16);
  BigRealMatrix(const BigRealMatrix &a);
  unsigned int setPrecision(unsigned int digits);
  unsigned int getPrecision() const {
    return m_digits;
  }
  static BigRealMatrix one( size_t dim , unsigned int digits = 16);
  static BigRealMatrix zero(size_t rows, size_t columns, unsigned int digits = 16);
  BigRealVector getRow(   size_t row) const;
  BigRealVector getColumn(size_t column) const;
};

BigRealVector operator*(const BigRealVector &lts, const BigRealMatrix &rhs);
BigRealVector operator*(const BigRealMatrix &lts, const BigRealVector &rhs);
BigRealMatrix operator+(const BigRealMatrix &lts, const BigRealMatrix &rhs);
BigRealMatrix operator-(const BigRealMatrix &lts, const BigRealMatrix &rhs);
BigRealMatrix operator*(const BigRealMatrix &lts, const BigRealMatrix &rhs);
BigRealMatrix operator*(const BigReal       &d  , const BigRealMatrix &rhs);
BigRealMatrix operator*(const BigRealMatrix &lts, const BigReal       &d  );
BigRealMatrix operator/(const BigRealMatrix &lts, const BigReal       &d  );
BigReal       det(      const BigRealMatrix &a);
BigRealMatrix inverse(  const BigRealMatrix &a);
BigRealMatrix transpose(const BigRealMatrix &a);
BigReal       normf(    const BigRealMatrix &a); // Frobenius norm

class BigRealLUMatrix : private BigRealMatrix {
private:
  size_t  *m_permut;
  int      m_detsign;

  void allocPermut();
  void initPermut();
  BigRealVector evald() const;
  void pivot(const BigRealVector &d, unsigned int k);
  void lowerUpper();
  BigRealLUMatrix(const BigRealLUMatrix &a);                              /* not defined */
  BigRealLUMatrix &operator=(const BigRealLUMatrix &a);                   /* not defined */
  BigRealLUMatrix &setDimension(size_t rows, size_t cols);   /* not defined */

public:
  BigRealLUMatrix();
  BigRealLUMatrix(const BigRealMatrix &a);
  ~BigRealLUMatrix();
  BigRealLUMatrix &operator=(const BigRealMatrix &a);
  BigRealMatrix getInverse() const;
  BigRealVector solve(const BigRealVector &y) const;
  BigReal getDeterminant() const;


  friend tostream &operator<<(tostream &out, const BigRealLUMatrix &a);
};
