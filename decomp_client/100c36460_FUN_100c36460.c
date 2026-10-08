
undefined8 FUN_100c36460(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long *ptr;
  code *pcVar7;
  void *pvVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  
  if (*(long *)(*param_1 + 0x20) == 0) {
    uVar11 = 0x6a;
    uVar9 = 0x42;
    uVar12 = 0xa9;
  }
  else if (*param_1 == *param_2) {
    if (param_1 == param_2) {
      return 1;
    }
    puVar13 = (undefined8 *)param_1[0xc];
    while (puVar13 != (undefined8 *)0x0) {
      puVar10 = (undefined8 *)*puVar13;
      (*(code *)puVar13[3])(puVar13[1]);
      FUN_100bf3910(puVar13);
      puVar13 = puVar10;
    }
    param_1[0xc] = 0;
    for (puVar13 = (undefined8 *)param_2[0xc]; puVar13 != (undefined8 *)0x0;
        puVar13 = (undefined8 *)*puVar13) {
      lVar5 = (*(code *)puVar13[2])(puVar13[1]);
      if (lVar5 == 0) {
        return 0;
      }
      lVar1 = puVar13[2];
      lVar2 = puVar13[3];
      lVar3 = puVar13[4];
      for (puVar10 = (undefined8 *)param_1[0xc]; puVar10 != (undefined8 *)0x0;
          puVar10 = (undefined8 *)*puVar10) {
        if (((puVar10[2] == lVar1) && (puVar10[3] == lVar2)) && (puVar10[4] == lVar3)) {
          uVar11 = 0xd3;
          uVar9 = 0x6c;
          uVar12 = 0x215;
          goto LAB_100c364ba;
        }
      }
      plVar6 = (long *)FUN_100bf3540(0x28,"ec_lib.c",0x21e);
      if (plVar6 == (long *)0x0) {
        return 0;
      }
      plVar6[1] = lVar5;
      plVar6[2] = lVar1;
      plVar6[3] = lVar2;
      plVar6[4] = lVar3;
      *plVar6 = param_1[0xc];
      param_1[0xc] = (long)plVar6;
    }
    plVar6 = (long *)param_2[1];
    ptr = (long *)param_1[1];
    if (plVar6 == (long *)0x0) {
      if (ptr != (long *)0x0) {
        pcVar7 = *(code **)(*ptr + 0x58);
        if ((pcVar7 != (code *)0x0) || (pcVar7 = *(code **)(*ptr + 0x50), pcVar7 != (code *)0x0)) {
          (*pcVar7)(ptr);
        }
        _OPENSSL_cleanse(ptr,0x58);
        FUN_100bf3910(ptr);
        param_1[1] = 0;
      }
LAB_100c36709:
      lVar5 = FUN_100c26b50(param_1 + 2,param_2 + 2);
      if (lVar5 == 0) {
        return 0;
      }
      lVar5 = FUN_100c26b50(param_1 + 5,param_2 + 5);
      if (lVar5 != 0) {
        *(int *)(param_1 + 8) = (int)param_2[8];
        *(undefined4 *)((long)param_1 + 0x44) = *(undefined4 *)((long)param_2 + 0x44);
        *(int *)(param_1 + 9) = (int)param_2[9];
        if (param_2[10] == 0) {
          if (param_1[10] != 0) {
            FUN_100bf3910();
          }
          param_1[0xb] = 0;
          param_1[10] = 0;
        }
        else {
          if (param_1[10] != 0) {
            FUN_100bf3910();
          }
          pvVar8 = (void *)FUN_100bf3540((int)param_2[0xb],"ec_lib.c",0xdc);
          param_1[10] = (long)pvVar8;
          if (pvVar8 == (void *)0x0) {
            return 0;
          }
          _memcpy(pvVar8,(void *)param_2[10],param_2[0xb]);
          if (pvVar8 == (void *)0x0) {
            return 0;
          }
          param_1[0xb] = param_2[0xb];
        }
                    /* WARNING: Could not recover jumptable at 0x000100c36803. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar9 = (**(code **)(*param_1 + 0x20))(param_1,param_2);
        return uVar9;
      }
      return 0;
    }
    if (ptr == (long *)0x0) {
      ptr = (long *)FUN_100c368e0(param_1);
      param_1[1] = (long)ptr;
      if (ptr == (long *)0x0) {
        return 0;
      }
      plVar6 = (long *)param_2[1];
    }
    pcVar7 = *(code **)(*ptr + 0x60);
    if (pcVar7 == (code *)0x0) {
      uVar11 = 0x72;
      uVar9 = 0x42;
      uVar12 = 0x2d1;
    }
    else {
      if (*ptr == *plVar6) {
        if ((ptr != plVar6) && (iVar4 = (*pcVar7)(ptr), iVar4 == 0)) {
          return 0;
        }
        goto LAB_100c36709;
      }
      uVar11 = 0x72;
      uVar9 = 0x65;
      uVar12 = 0x2d5;
    }
  }
  else {
    uVar11 = 0x6a;
    uVar9 = 0x65;
    uVar12 = 0xad;
  }
LAB_100c364ba:
  FUN_100c62ee0(0x10,uVar11,uVar9,"ec_lib.c",uVar12);
  return 0;
}

