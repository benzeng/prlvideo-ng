
ushort * FUN_1004f0ca0(ushort *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  while (((*(short *)(param_2 + 0x18 + lVar1 * 2) != 0 &&
          (*(short *)(param_2 + 0x1a + lVar1 * 2) != 0)) &&
         (*(short *)(param_2 + 0x1c + lVar1 * 2) != 0))) {
    if ((*(short *)(param_2 + 0x1e + lVar1 * 2) == 0) || (lVar1 = lVar1 + 4, 0x103 < lVar1)) break;
  }
  QString::fromUtf16(param_1,(int)param_2 + 0x18);
  return param_1;
}

