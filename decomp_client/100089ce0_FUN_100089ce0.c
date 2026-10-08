
void FUN_100089ce0(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined1 extraout_AH;
  undefined8 uVar4;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  puVar2 = PTR__OBJC_CLASS___NSString_10226a7c8;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  CAppliance::getApplianceId();
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (puVar2,PTR_s_stringWithQString__102268d00,&local_38);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar1,PTR_s_setVmUuid__10226a030,uVar4);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100089d7d;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100089d7d:
  puVar2 = PTR__OBJC_CLASS___NSString_10226a7c8;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  CAppliance::getApplianceName();
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (puVar2,PTR_s_stringWithQString__102268d00,&local_40);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar1,PTR_s_setVmName__102269908,uVar4);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100089e08;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100089e08:
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x30) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x30) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x38);
  }
  FUN_10079d6b0(uVar4);
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x30) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x30) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x38);
  }
  uVar3 = FUN_10079d6b0(uVar4);
  uVar4 = FUN_1000894e0(extraout_AH,uVar3);
  puVar2 = PTR__objc_msgSend_1021e1c68;
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar1,PTR_s_setVmPictureMap__10226a040,uVar4);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = (*(code *)puVar2)(PTR__OBJC_CLASS___NSNumber_10226a848,PTR_s_numberWithInt__1022698b8,0);
  (*(code *)puVar2)(uVar1,PTR_s_setVmSize__10226a028,uVar4);
  return;
}

