
long * FUN_10072dd00(long param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = (long *)0x0;
  if ((param_1 != 0) && (plVar3 = (long *)0x0, *(long *)(param_1 + 8) != 0)) {
    plVar2 = (long *)FUN_10081ddd0(0xe8,"../src/snlic/sn_crypto_helper_02.c",0x58);
    plVar3 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      *plVar2 = param_1;
      plVar2[0xc] = 0;
      plVar2[1] = 0;
      plVar2[4] = 0;
      plVar2[3] = 0;
      plVar2[2] = 0;
      plVar2[7] = 0;
      plVar2[6] = 0;
      plVar2[5] = 0;
      plVar2[8] = 0;
      *(undefined4 *)(plVar2 + 9) = 4;
      plVar2[0xb] = 0;
      plVar2[10] = 0;
      iVar1 = (**(code **)(param_1 + 8))(plVar2);
      plVar3 = plVar2;
      if (iVar1 == 0) {
        FUN_10081e1a0(plVar2);
        plVar3 = (long *)0x0;
      }
    }
  }
  return plVar3;
}

