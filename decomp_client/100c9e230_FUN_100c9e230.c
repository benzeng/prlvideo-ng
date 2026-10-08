
undefined8 FUN_100c9e230(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  byte bVar9;
  int *local_90;
  int local_88 [26];
  
  bVar9 = 0;
  local_90 = local_88;
  if (-1 < param_2) {
    local_88[0] = param_2;
    puVar2 = (undefined8 *)FUN_100bf7eb0(&local_90,&PTR_DAT_10230b350,0x28,8,FUN_100c9e7e0);
    if (puVar2 == (undefined8 *)0x0) {
      if ((DAT_102318448 == 0) || (iVar1 = FUN_100c60360(DAT_102318448,local_88), iVar1 == -1))
      goto LAB_100c9e34f;
      puVar2 = (undefined8 *)FUN_100c60820(DAT_102318448,iVar1);
    }
    else {
      puVar2 = (undefined8 *)*puVar2;
    }
    if (puVar2 != (undefined8 *)0x0) {
      puVar3 = (undefined8 *)FUN_100bf3540(0x68,"v3_lib.c",0x91);
      if (puVar3 == (undefined8 *)0x0) {
        uVar6 = 0x6a;
        uVar5 = 0x41;
        uVar8 = 0x92;
      }
      else {
        puVar7 = puVar3;
        for (lVar4 = 0xd; lVar4 != 0; lVar4 = lVar4 + -1) {
          *puVar7 = *puVar2;
          puVar2 = puVar2 + (ulong)bVar9 * -2 + 1;
          puVar7 = puVar7 + (ulong)bVar9 * -2 + 1;
        }
        *(undefined4 *)puVar3 = param_1;
        *(byte *)((long)puVar3 + 4) = *(byte *)((long)puVar3 + 4) | 1;
        if ((DAT_102318448 == 0) &&
           (DAT_102318448 = FUN_100c5ff30(FUN_100c9e050), DAT_102318448 == 0)) {
          uVar6 = 0x68;
          uVar5 = 0x41;
          uVar8 = 0x4d;
        }
        else {
          iVar1 = FUN_100c604e0(DAT_102318448,puVar3);
          if (iVar1 != 0) {
            return 1;
          }
          uVar6 = 0x68;
          uVar5 = 0x41;
          uVar8 = 0x51;
        }
      }
      goto LAB_100c9e36b;
    }
  }
LAB_100c9e34f:
  uVar6 = 0x6a;
  uVar5 = 0x66;
  uVar8 = 0x8c;
LAB_100c9e36b:
  FUN_100c62ee0(0x22,uVar6,uVar5,"v3_lib.c",uVar8);
  return 0;
}

