
undefined8 FUN_10002a7b0(long param_1,long *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  char cVar6;
  undefined1 uVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  undefined8 uVar11;
  undefined1 local_98 [24];
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 *local_78;
  undefined4 *puStack_70;
  undefined4 *local_68;
  undefined1 local_60 [24];
  void *local_48;
  void *pvStack_40;
  undefined8 local_38;
  
  lVar2 = *param_2;
  lVar3 = *(long *)(lVar2 + 0x10);
  puVar1 = (undefined8 *)(lVar2 + lVar3);
  QByteArray::resize((int)param_3);
  puVar10 = (uint *)*param_3;
  if ((1 < *puVar10) || (*(long *)(puVar10 + 4) != 0x18)) {
    QByteArray::reallocData(param_3,puVar10[1] + 1,puVar10[2] >> 0x1f);
    puVar10 = (uint *)*param_3;
  }
  lVar4 = *(long *)(puVar10 + 4);
  uVar11 = *puVar1;
  *(undefined8 *)((long)puVar10 + lVar4 + 8) = puVar1[1];
  *(undefined8 *)((long)puVar10 + lVar4) = uVar11;
  switch(*(undefined4 *)(lVar3 + 0xc + lVar2)) {
  case 1:
  case 4:
    FUN_1008e3970("PTIAHOST","vm",0,"BootHelper: Failed to init");
    uVar11 = 0x32d7;
    goto LAB_10002a8b8;
  case 2:
  case 3:
    FUN_1008e3970("PTIAHOST","vm",0,"BootHelper: Unknown Windows version");
    uVar11 = 0x32d8;
LAB_10002a8b8:
    local_78 = (undefined4 *)0x0;
    puStack_70 = (undefined4 *)0x0;
    local_68 = (undefined4 *)0x0;
    local_7c = 0x3e88;
    FUN_10002de70(&local_78,&local_7c);
    local_80 = 0x3e86;
    if (puStack_70 == local_68) {
      FUN_10002de70(&local_78,&local_80);
    }
    else {
      *puStack_70 = 0x3e86;
      puStack_70 = puStack_70 + 1;
    }
    cVar6 = FUN_1000a7e30(*(undefined8 *)(param_1 + 0x10));
    uVar5 = DAT_1011c3650;
    uVar9 = 2;
    if (cVar6 != '\0') {
      FUN_10006a060(local_98);
      iVar8 = FUN_1000648b0(uVar5,uVar11,&local_78,local_98);
      FUN_10006a680(local_98);
      uVar9 = (uint)(iVar8 == 0x3e88);
      if (iVar8 != 0x3e88) {
        FUN_10008fa70(*(undefined8 *)(param_1 + 0x10),0x4e29);
      }
    }
    if (local_78 != (undefined4 *)0x0) {
      if (puStack_70 != local_78) {
        puStack_70 = (undefined4 *)
                     ((~((long)puStack_70 + (-4 - (long)local_78)) & 0xfffffffffffffffcU) +
                     (long)puStack_70);
      }
      operator_delete(local_78);
    }
    break;
  case 5:
    FUN_1008e3970("PTIAHOST","vm",0,"BootHelper: Started");
    cVar6 = FUN_1000a7e30(*(undefined8 *)(param_1 + 0x10));
    uVar11 = DAT_1011c3650;
    uVar9 = 0xffffffff;
    if (cVar6 != '\0') {
      local_48 = (void *)0x0;
      pvStack_40 = (void *)0x0;
      local_38 = 0;
      FUN_10006a060(local_60);
      FUN_1000648b0(uVar11,0x80001004,&local_48,local_60);
      FUN_10006a680(local_60);
      if (local_48 != (void *)0x0) {
        if (pvStack_40 != local_48) {
          pvStack_40 = (void *)((~((long)pvStack_40 + (-4 - (long)local_48)) & 0xfffffffffffffffcU)
                               + (long)pvStack_40);
        }
        operator_delete(local_48);
      }
    }
    break;
  case 6:
    uVar7 = FUN_1000a7e30(*(undefined8 *)(param_1 + 0x10));
    uVar9 = FUN_1007da300("guest.boothelper.enable",uVar7);
    FUN_1008e3970("PTIAHOST","vm",0,"BootHelper: Pre-startup notification (0x%x)",uVar9);
    break;
  default:
    FUN_1008e3970("PTIAHOST","vm",0,"BootHelper: Unknown command (%u)!");
    uVar9 = 0xffffffff;
  }
  *(uint *)(lVar4 + 0xc + (long)puVar10) = uVar9;
  return 0;
}

