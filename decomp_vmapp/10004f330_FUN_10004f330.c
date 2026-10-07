
undefined4 FUN_10004f330(long param_1,undefined8 param_2,char param_3,char param_4)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  uint *puVar6;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  QMutex::lock();
  lVar1 = *(long *)(param_1 + 0x88);
  lVar4 = 0;
  if (lVar1 != 0) {
    if (param_4 == '\0') {
      QMutex::unlock();
      return 0xf000001e;
    }
    *(undefined8 *)(param_1 + 0x88) = 0;
    lVar4 = lVar1;
  }
  puVar6 = *(uint **)(param_1 + 0x78);
  uVar2 = puVar6[2];
  if (puVar6[3] != uVar2) {
    if (1 < *puVar6) {
      FUN_100050940((undefined8 *)(param_1 + 0x78),puVar6[1]);
      puVar6 = *(uint **)(param_1 + 0x78);
      uVar2 = puVar6[2];
    }
    uVar5 = 0;
    lVar3 = FUN_1002a6120(param_2,0,1);
    lVar1 = *(long *)(puVar6 + (long)(int)uVar2 * 2 + 4);
    if (*(uint *)(lVar1 + 4) <= *(uint *)(lVar3 + 8)) {
      FUN_1002a5a50(lVar3,0,lVar1 + *(long *)(lVar1 + 0x10));
      FUN_1000501c0(param_1);
      goto LAB_10004f4cd;
    }
    if (*(char *)(param_1 + 0x80) == '\0') {
      *(undefined1 *)(param_1 + 0x80) = 1;
      local_3c = *(undefined4 *)(*(long *)(puVar6 + (long)(int)uVar2 * 2 + 4) + 4);
      local_40 = 6;
      local_38 = 0;
      local_34 = 0;
      uVar5 = 0;
      FUN_1002a5a50(lVar3,0,&local_40,0x10);
      goto LAB_10004f4cd;
    }
    if (2 < DAT_1011b55f8) {
      FUN_1008e3970("UIEMU","vm",3,"Ctl dropped (was too large two times), code=%u, ctlSz=%u",
                    *(undefined4 *)(lVar1 + *(long *)(lVar1 + 0x10)),*(uint *)(lVar1 + 4));
    }
    FUN_1000501c0(param_1);
  }
  uVar5 = 0xf000001c;
  if (param_3 != '\0') {
    *(undefined8 *)(param_1 + 0x88) = param_2;
    uVar5 = 0xffffffff;
  }
LAB_10004f4cd:
  QMutex::unlock();
  if (lVar4 != 0) {
    FUN_1004c07d0(param_1,lVar4,0xf0000024);
  }
  return uVar5;
}

