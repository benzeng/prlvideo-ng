
void FUN_100d78ef0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  QArrayData *local_38;
  
  puVar1 = PTR__objc_msgSend_1021e1c68;
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSAutoreleasePool_10226a970,PTR_s_alloc_102268b58);
  uVar3 = (*(code *)puVar1)(uVar3,PTR_s_init_102268ca8);
  *param_1 = uVar3;
  param_1[1] = 0;
  puVar2 = PTR__OBJC_CLASS___NSString_10226a7c8;
  QString::toUtf8();
  lVar4 = (*(code *)puVar1)(puVar2,PTR_s_stringWithUTF8String__1022697c0,
                            local_38 + *(long *)(local_38 + 0x10));
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) goto LAB_100d78f90;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_100d78f90:
  lVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)(lVar4,PTR_s_length_102269050);
  if ((lVar4 == 0) || (lVar5 == 0)) {
    uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (PTR__OBJC_CLASS___NSBundle_10226a988,PTR_s_mainBundle_102269b28);
  }
  else {
    uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (PTR__OBJC_CLASS___NSBundle_10226a988,PTR_s_bundleWithPath__10226a5d0,lVar4);
  }
  param_1[1] = uVar3;
  return;
}

