
undefined8 FUN_100b60170(long param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    if (*(long *)(param_1 + 0x10) == 0) {
LAB_100b601b1:
      FUN_100df99c0("","License",0,"fmt = %d, m_pPd4Lic = %p, m_pVzLic=%p",param_2,
                    *(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
      FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","0","PrlLicense.cpp",0xa6,
                    "GetVtdAvailable");
      return 0x80000009;
    }
    uVar1 = FUN_100b670d0(*(long *)(param_1 + 0x10));
  }
  else {
    if ((param_2 != 1) || (*(long *)(param_1 + 8) == 0)) goto LAB_100b601b1;
    uVar1 = FUN_100b80470(*(long *)(param_1 + 8));
  }
  *param_3 = uVar1;
  return 0;
}

