
void FUN_100089f20(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  puVar1 = PTR__objc_msgSend_1021e1c68;
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSString_10226a7c8,PTR_s_stringWithQString__102268d00,
                     *(undefined8 *)(param_1 + 0x40));
  (*(code *)puVar1)(uVar4,PTR_s_setVmUuid__10226a030,uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSString_10226a7c8,PTR_s_stringWithQString__102268d00,
                            *(long *)(param_1 + 0x40) + 8);
  (*(code *)puVar1)(uVar4,PTR_s_setVmName__102269908,uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = (*(code *)puVar1)(PTR__OBJC_CLASS___PDProgress_10226aa60,PTR_s_new_102269070);
  (*(code *)puVar1)(uVar4,PTR_s_setProgress__10226a088,uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  local_40 = (QArrayData *)QString::fromAscii_helper("third_party",0xb);
  uVar3 = FUN_1000893b0(&local_40);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_setVmPictureMap__10226a040,uVar3);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10008a01b;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10008a01b:
  uVar4 = (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x18),PTR_s_progress_102269fa8);
  (*(code *)puVar1)(uVar4,PTR_s_setIndeterminate__102268fa0,1);
  uVar4 = (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x18),PTR_s_progress_102269fa8);
  puVar2 = PTR__OBJC_CLASS___NSString_10226a7c8;
  QMetaObject::tr((char *)&local_48,PTR_staticMetaObject_1021e1520,0x1dba282);
  uVar3 = (*(code *)puVar1)(puVar2,PTR_s_stringWithQString__102268d00,&local_48);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_setLocalizedName__10226a090,uVar3);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10008a0c8;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10008a0c8:
  (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x18),PTR_s_setRunnable__10226a050,0);
  (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x18),PTR_s_setSelectable__1022690c8,0);
  return;
}

