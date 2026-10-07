
undefined8 FUN_1008c2cb0(undefined4 param_1,int param_2)

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
    puVar2 = (undefined8 *)FUN_100822740(&local_90,&PTR_DAT_1011b1580,0x28,8,FUN_1008c3260);
    if (puVar2 == (undefined8 *)0x0) {
      if ((DAT_1011c2a08 == 0) || (iVar1 = FUN_100885160(DAT_1011c2a08,local_88), iVar1 == -1))
      goto LAB_1008c2dcf;
      puVar2 = (undefined8 *)FUN_100885620(DAT_1011c2a08,iVar1);
    }
    else {
      puVar2 = (undefined8 *)*puVar2;
    }
    if (puVar2 != (undefined8 *)0x0) {
      puVar3 = (undefined8 *)FUN_10081ddd0(0x68,"v3_lib.c",0x91);
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
        if ((DAT_1011c2a08 == 0) &&
           (DAT_1011c2a08 = FUN_100884d30(FUN_1008c2ad0), DAT_1011c2a08 == 0)) {
          uVar6 = 0x68;
          uVar5 = 0x41;
          uVar8 = 0x4d;
        }
        else {
          iVar1 = FUN_1008852e0(DAT_1011c2a08,puVar3);
          if (iVar1 != 0) {
            return 1;
          }
          uVar6 = 0x68;
          uVar5 = 0x41;
          uVar8 = 0x51;
        }
      }
      goto LAB_1008c2deb;
    }
  }
LAB_1008c2dcf:
  uVar6 = 0x6a;
  uVar5 = 0x66;
  uVar8 = 0x8c;
LAB_1008c2deb:
  FUN_100887ce0(0x22,uVar6,uVar5,"v3_lib.c",uVar8);
  return 0;
}

