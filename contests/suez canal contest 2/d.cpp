Rem
Rem
Rem onemratt.sql
Rem
Rem  Copyright (c) Oracle Corporation 2001. All Rights Reserved.
Rem
Rem    NAME
Rem      onemratt.sql - all$olapmr_attributes
Rem
Rem    DESCRIPTION
Rem      Attributes.
Rem
Rem    NOTES
Rem      
Rem
Rem    MODIFIED   (MM/DD/YY)
Rem    mstasiew    10/31/01 - Add permission check for bug 1956854  
Rem                         - mstasiew_txn100542
Rem    cdalessi    07/06/01 - cdalessi_t50006
Rem    ddedonat    05/29/01 - Created
Rem

CREATE OR REPLACE VIEW all$olapmr_attributes AS SELECT 
  u.name                 dim_owner,
  d.name                 dim_name,
  dat.PHYSICALNAME       dim_attribute_name,
  l.levelname            levelname,
  decode(c.type#, 2,
  decode(c.scale,NULL, 
  decode(c.precision#, NULL, 'DOUBLE', 'FLOAT'),
         'DOUBLE'),
  8, 'DOUBLE',
  12, 'DATE', 
  'STRING') 