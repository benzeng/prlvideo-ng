
void FUN_100045900(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  QArrayData *local_38;
  
  uVar4 = _objc_autoreleasePoolPush();
  puVar2 = PTR__OBJC_CLASS___NSURL_10226a8d0;
  puVar1 = PTR__objc_msgSend_1021e1c68;
  uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSString_10226a7c8,PTR_s_stringWithQString__102268d00,param_1
                    );
  uVar5 = (*(code *)puVar1)(puVar2,PTR_s_fileURLWithPath__1022699c8,uVar5);
  iVar3 = _LSRegisterURL(uVar5,1);
  if ((iVar3 != 0) && (0 < DAT_10230ffd0)) {
    QString::toUtf8();
    FUN_100df99c0("SGASMGMT","prl_client_app",1,"LSRegisterURL() err %i, bundlePath=\"%s\"",iVar3,
                  local_38 + *(long *)(local_38 + 0x10));
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        UNLOCK();
        if (*(int *)local_38 != 0) goto LAB_1000459d4;
      }
      QArrayData::deallocate(local_38,1,8);
    }
  }
LAB_1000459d4:
  _objc_autoreleasePoolPop(uVar4);
  return;
}

