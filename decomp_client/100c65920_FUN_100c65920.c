
undefined8 FUN_100c65920(long *param_1,int *param_2,long param_3)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  FUN_100c6fcc0(param_1,2);
  if ((param_1[1] == 0) || ((int *)*param_1 == (int *)0x0)) {
    if (param_2 != (int *)0x0) {
      if (param_1[1] != 0) goto LAB_100c6596d;
      goto LAB_100c65972;
    }
    param_2 = (int *)*param_1;
    if (param_2 != (int *)0x0) goto LAB_100c65a3a;
    FUN_100c62ee0(6,0x80,0x8b,"digest.c",0xc4);
LAB_100c65af8:
    uVar4 = 0;
  }
  else {
    if ((param_2 != (int *)0x0) && (*param_2 != *(int *)*param_1)) {
LAB_100c6596d:
      FUN_100c557e0();
LAB_100c65972:
      if (param_3 == 0) {
        param_3 = FUN_100c576f0(*param_2);
        if (param_3 == 0) {
          param_1[1] = 0;
          goto LAB_100c65a3a;
        }
      }
      else {
        iVar2 = FUN_100c55720(param_3);
        if (iVar2 == 0) {
          FUN_100c62ee0(6,0x80,0x86,"digest.c",0xaa);
          goto LAB_100c65af8;
        }
      }
      param_2 = (int *)FUN_100c57710(param_3,*param_2);
      if (param_2 == (int *)0x0) {
        FUN_100c62ee0(6,0x80,0x86,"digest.c",0xb5);
        FUN_100c557e0(param_3);
        goto LAB_100c65af8;
      }
      param_1[1] = param_3;
LAB_100c65a3a:
      piVar1 = (int *)*param_1;
      if (piVar1 != param_2) {
        if ((piVar1 != (int *)0x0) && (piVar1[0x1a] != 0)) {
          FUN_100bf3910(param_1[3]);
        }
        *param_1 = (long)param_2;
        if (((*(byte *)((long)param_1 + 0x11) & 1) == 0) && (iVar2 = param_2[0x1a], iVar2 != 0)) {
          param_1[5] = *(long *)(param_2 + 8);
          lVar3 = FUN_100bf3540(iVar2,"digest.c",0xd0);
          param_1[3] = lVar3;
          if (lVar3 == 0) {
            FUN_100c62ee0(6,0x80,0x41,"digest.c",0xd2);
            goto LAB_100c65af8;
          }
        }
      }
    }
    if (((param_1[4] != 0) &&
        (iVar2 = FUN_100c71a40(param_1[4],0xffffffff,0xf8,7,0,param_1), iVar2 < 1)) && (iVar2 != -2)
       ) {
      return 0;
    }
    uVar4 = 1;
    if ((*(byte *)((long)param_1 + 0x11) & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000100c65ad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(*param_1 + 0x18))(param_1);
      return uVar4;
    }
  }
  return uVar4;
}

