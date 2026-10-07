
undefined8 FUN_1008cdc50(long param_1,undefined8 param_2)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  undefined8 uVar6;
  
  plVar1 = *(long **)(param_1 + 0x78);
  iVar2 = FUN_100885600(param_2);
  if (iVar2 == 0) {
LAB_1008cdd8d:
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) | 8;
    uVar6 = 0xffffffff;
  }
  else {
    iVar2 = FUN_100885600(param_2);
    if (0 < iVar2) {
      iVar2 = 0;
      do {
        puVar4 = (undefined8 *)FUN_100885620(param_2,iVar2);
        iVar3 = FUN_100821ab0(puVar4[1]);
        if (iVar3 == 0x2ea) goto LAB_1008cdd8d;
        iVar3 = FUN_100821ab0(*puVar4);
        if (iVar3 == 0x2ea) goto LAB_1008cdd8d;
        pbVar5 = (byte *)FUN_1008cd800(plVar1,*puVar4);
        if (pbVar5 == (byte *)0x0) {
          if ((uint *)*plVar1 != (uint *)0x0) {
            uVar6 = 0;
            pbVar5 = (byte *)FUN_1008cdb70(0,*puVar4,*(uint *)*plVar1 & 0x10);
            if (pbVar5 != (byte *)0x0) {
              *(undefined8 *)(pbVar5 + 0x10) = *(undefined8 *)(*plVar1 + 0x10);
              *pbVar5 = *pbVar5 | 6;
              iVar3 = FUN_1008852e0(plVar1[1],pbVar5);
              if (iVar3 != 0) goto LAB_1008cdd4a;
              FUN_1008cdb20(pbVar5);
            }
            goto LAB_1008cdd9f;
          }
        }
        else {
          *pbVar5 = *pbVar5 | 1;
LAB_1008cdd4a:
          iVar3 = FUN_1008852e0(*(undefined8 *)(pbVar5 + 0x18),puVar4[1]);
          uVar6 = 0;
          if (iVar3 == 0) goto LAB_1008cdd9f;
          puVar4[1] = 0;
        }
        iVar2 = iVar2 + 1;
        iVar3 = FUN_100885600(param_2);
      } while (iVar2 < iVar3);
    }
    uVar6 = 1;
  }
LAB_1008cdd9f:
  FUN_100885590(param_2,FUN_1008cbc20);
  return uVar6;
}

