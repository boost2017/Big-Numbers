INSERT INTO test
  (
  select 
         service_provider_nr                        ,
         customer_nr + 1                            
    from service_table
    where
      service_provider_nr = 1
    browse access
  )
for stable access
