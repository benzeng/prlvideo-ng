
undefined8 FUN_10088ab60(long *param_1,long *param_2)

{
  int iVar1;
  void *pvVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((param_2 == (long *)0x0) || (lVar3 = *param_2, lVar3 == 0)) {
    uVar4 = 0x6f;
    uVar5 = 0x120;
LAB_10088ac2d:
    FUN_100887ce0(6,0x6e,uVar4,"digest.c",uVar5);
    uVar4 = 0;
  }
  else {
    if (param_2[1] != 0) {
      iVar1 = FUN_10087a520();
      if (iVar1 == 0) {
        uVar4 = 0x26;
        uVar5 = 0x126;
        goto LAB_10088ac2d;
      }
      lVar3 = *param_2;
    }
    pvVar2 = (void *)0x0;
    if (*param_1 == lVar3) {
      pvVar2 = (void *)param_1[3];
      FUN_100894730(param_1,4);
    }
    FUN_10088aa50(param_1);
    param_1[5] = param_2[5];
    param_1[4] = param_2[4];
    param_1[3] = param_2[3];
    param_1[2] = param_2[2];
    lVar3 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = lVar3;
    if ((param_2[3] != 0) && (iVar1 = *(int *)(*param_1 + 0x68), iVar1 != 0)) {
      if (pvVar2 == (void *)0x0) {
        pvVar2 = (void *)FUN_10081ddd0(iVar1,"digest.c",0x137);
        param_1[3] = (long)pvVar2;
        if (pvVar2 == (void *)0x0) {
          uVar4 = 0x41;
          uVar5 = 0x139;
          goto LAB_10088ac2d;
        }
        iVar1 = *(int *)(*param_1 + 0x68);
      }
      else {
        param_1[3] = (long)pvVar2;
      }
      _memcpy(pvVar2,(void *)param_2[3],(long)iVar1);
    }
    param_1[5] = param_2[5];
    if (param_2[4] != 0) {
      lVar3 = FUN_100896270();
      param_1[4] = lVar3;
      if (lVar3 == 0) {
        FUN_10088aa50(param_1);
        return 0;
      }
    }
    uVar4 = 1;
    if (*(code **)(*param_1 + 0x30) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010088acd3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(*param_1 + 0x30))(param_1,param_2);
      return uVar4;
    }
  }
  return uVar4;
}

