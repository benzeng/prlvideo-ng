
void FUN_1000897a0(long param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x20) + 4) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x28) == 0) {
    return;
  }
  lVar2 = FUN_10018d490();
  if (lVar2 == 0) {
    return;
  }
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x20) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
  }
  uVar3 = FUN_10018d490(uVar3);
  uVar3 = FUN_10016f500(uVar3);
  cVar1 = FUN_10061c2b0(uVar3,0x10080);
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x20) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
  }
  FUN_10018c2b0(uVar3);
  CVmConfiguration::getVmIdentification();
  CVmIdentification::getLinkedVmUuid();
  if ((cVar1 == '\0') || (*(int *)(local_28 + 4) == 0)) {
    (*(code *)PTR__objc_msgSend_1021e1c68)
              (*(undefined8 *)(param_1 + 0x18),PTR_s_setLinkedCloneVm__10226a098,0);
    (*(code *)PTR__objc_msgSend_1021e1c68)
              (*(undefined8 *)(param_1 + 0x18),PTR_s_setLinkedCloneVmHint__10226a0a0,&cf___);
    goto LAB_1000899be;
  }
  (*(code *)PTR__objc_msgSend_1021e1c68)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_setLinkedCloneVm__10226a098,1);
  uVar3 = FUN_100152280();
  lVar2 = FUN_1001548f0(uVar3,&local_28);
  if (lVar2 == 0) goto LAB_1000899be;
  QMetaObject::tr((char *)&local_38,"",0x1dba291);
  FUN_10018d830(&local_40,lVar2);
  QString::arg(&local_30,&local_38,&local_40,0,0x20);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100089902;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100089902:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100089932;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100089932:
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSString_10226a7c8,PTR_s_stringWithQString__102268d00,
                     &local_30);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar3,PTR_s_setLinkedCloneVmHint__10226a0a0,uVar4);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1000899be;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1000899be:
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return;
}

