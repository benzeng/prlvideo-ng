
void FUN_1002b5d00(undefined8 *param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  undefined8 uVar5;
  long lVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  
  FUN_1002578b0(param_1,1,0,0);
  FUN_10025ae40(param_1 + 0xd);
  *param_1 = &PTR_FUN_100bb3270;
  param_1[1] = &PTR_metaObject_100bb32f8;
  param_1[0xd] = &PTR_FUN_100bb3370;
  puVar1 = PTR_shared_null_100ba2188;
  param_1[0x12] = PTR_shared_null_100ba2188;
  QMutex::QMutex((QMutex *)(param_1 + 0x53));
  param_1[0x54] = puVar1;
  QObject::QObject((QObject *)(param_1 + 0x60),(QObject *)0x0);
  param_1[0x60] = &PTR_FUN_100bbe660;
  FUN_1002b54b0(param_1);
  if (-1 < DAT_1011c568c) {
    pcVar7 = "no";
    pcVar8 = "no";
    if ((DAT_1011c5648 & 1) != 0) {
      pcVar8 = "yes";
    }
    pcVar9 = "no";
    if ((DAT_1011c5648 & 2) != 0) {
      pcVar9 = "yes";
    }
    if ((DAT_1011c5648 & 4) != 0) {
      pcVar7 = "yes";
    }
    FUN_1008e3970("","USB",0,"Create HC: UHC:%s EHC:%s XHC:%s",pcVar8,pcVar9,pcVar7);
  }
  *(undefined4 *)(param_1 + 0x55) = 0;
  *(undefined4 *)((long)param_1 + 0x2ac) = 0;
  *(undefined4 *)(param_1 + 0x56) = 0;
  param_1[0x57] = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  param_1[0x62] = 0;
  *(undefined1 *)((long)param_1 + 0x2c4) = 0;
  FUN_100097210(DAT_1011c3698);
  CVmHardware::getMemory();
  uVar2 = CVmMemory::getRamSize();
  DAT_1011c5640 = (ulong)uVar2 << 0x14;
  param_1[0x5d] = 0;
  if ((DAT_1011c5648 & 1) != 0) {
    pvVar4 = operator_new(0x14f0);
    uVar5 = FUN_100257d80(param_1);
    FUN_1002c9200(pvVar4,param_1,uVar5);
    param_1[0x5d] = pvVar4;
    *(uint *)(param_1 + 0x55) = *(uint *)(param_1 + 0x55) | 1;
  }
  uVar2 = DAT_1011c5648;
  param_1[0x5e] = 0;
  if ((uVar2 & 2) != 0) {
    pvVar4 = operator_new(0x2500);
    uVar5 = FUN_100257d80(param_1);
    FUN_1002cc380(pvVar4,param_1,uVar5);
    param_1[0x5e] = pvVar4;
    *(uint *)(param_1 + 0x55) = *(uint *)(param_1 + 0x55) | 2;
    uVar2 = DAT_1011c5648;
  }
  param_1[0x5f] = 0;
  if ((uVar2 & 4) != 0) {
    pvVar4 = operator_new(0xbd20);
    uVar5 = FUN_100257d80(param_1);
    FUN_1002d1f10(pvVar4,param_1,uVar5);
    param_1[0x5f] = pvVar4;
    *(uint *)(param_1 + 0x55) = *(uint *)(param_1 + 0x55) | 4;
  }
  DAT_100bfa1ed = DAT_100bfa1ed | 1;
  lVar6 = 4;
  DAT_100bfa1d4 = param_1;
  do {
    *(undefined4 *)((long)&DAT_1011c4aa0 + lVar6) = 1;
    lVar6 = lVar6 + 0x30;
  } while (lVar6 != 0xb74);
  iVar3 = FUN_1002b6090((QObject *)(param_1 + 0x60));
  if ((iVar3 == 0) && (-1 < DAT_1011c568c)) {
    FUN_1008e3970("","USB",0,"Can\'t sign-in for signals.");
  }
  uVar5 = FUN_10070e6f0("A@devices.usb.timeout");
  param_1[0x59] = uVar5;
  uVar5 = FUN_10070e6f0("A@devices.usb.uhci.timeout");
  param_1[0x5a] = uVar5;
  uVar5 = FUN_10070e6f0("A@devices.usb.ehci.timeout");
  param_1[0x5b] = uVar5;
  uVar5 = FUN_10070e6f0("A@devices.usb.xhci.timeout");
  param_1[0x5c] = uVar5;
  FUN_100257c20(param_1);
  return;
}

