
uint FUN_100c7ac30(ulong param_1,byte param_2,undefined1 *param_3,code *param_4,undefined8 param_5)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  char *pcVar6;
  char local_49;
  undefined1 local_48 [24];
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  uVar5 = 0xffffffff;
  local_30 = lVar1;
  if (param_1 >> 0x20 != 0) goto LAB_100c7adbf;
  if (0xffff < param_1) {
    FUN_100c5d5b0(local_48,0x13,"\\W%08lX");
    iVar3 = (*param_4)(param_5,local_48,10);
    uVar5 = -(uint)(iVar3 == 0) | 10;
    goto LAB_100c7adbf;
  }
  if (0xff < param_1) {
    FUN_100c5d5b0(local_48,0x13,"\\U%04lX");
    iVar3 = (*param_4)(param_5,local_48,6);
    uVar5 = -(uint)(iVar3 == 0) | 6;
    goto LAB_100c7adbf;
  }
  local_49 = (char)param_1;
  if ((param_1 & 0x80) < 0x80) {
    bVar2 = (&DAT_101dae980)[param_1 & 0xff] & param_2;
  }
  else {
    bVar2 = param_2 & 4;
  }
  if ((bVar2 & 0x61) == 0) {
    if ((bVar2 & 6) != 0) {
      FUN_100c5d5b0(local_48,0xb,"\\%02X",param_1 & 0xff);
      iVar3 = (*param_4)(param_5,local_48,3);
      uVar5 = -(uint)(iVar3 == 0) | 3;
      goto LAB_100c7adbf;
    }
    if (((param_2 & 0xf) == 0) || (((uint)param_1 & 0xff) != 0x5c)) goto LAB_100c7ad7e;
    pcVar6 = "\\\\";
    uVar4 = 2;
  }
  else {
    if ((bVar2 & 8) != 0) {
      if (param_3 != (undefined1 *)0x0) {
        *param_3 = 1;
      }
LAB_100c7ad7e:
      iVar3 = (*param_4)(param_5,&local_49,1);
      uVar5 = -(uint)(iVar3 == 0) | 1;
      goto LAB_100c7adbf;
    }
    iVar3 = (*param_4)(param_5,"\\",1);
    if (iVar3 == 0) goto LAB_100c7adbf;
    pcVar6 = &local_49;
    uVar4 = 1;
  }
  iVar3 = (*param_4)(param_5,pcVar6,uVar4);
  uVar5 = -(uint)(iVar3 == 0) | 2;
LAB_100c7adbf:
  if (lVar1 == local_30) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

