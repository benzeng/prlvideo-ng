
bool FUN_100a20670(long *param_1)

{
  int *piVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int *piVar8;
  bool bVar9;
  uint local_54;
  long local_50;
  int *local_48;
  int *local_40;
  int *local_38;
  undefined4 local_30;
  undefined1 local_21;
  
  if (*(int *)(*param_1 + 8) < *(int *)(*param_1 + 0xc)) {
    uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (PTR__OBJC_CLASS___NSMutableArray_10226a840,PTR_s_new_102269070);
    local_48 = (int *)*param_1;
    if (*local_48 != -1) {
      if (*local_48 == 0) {
        QListData::detach((int)&local_48);
        iVar3 = local_48[2];
        if (iVar3 != local_48[3]) {
          puVar7 = (undefined8 *)(*param_1 + 0x10 + (long)*(int *)(*param_1 + 8) * 8);
          piVar8 = local_48 + (long)iVar3 * 2 + 4;
          lVar5 = (long)local_48[3] * 8 + (long)iVar3 * -8;
          do {
            piVar1 = (int *)*puVar7;
            *(int **)piVar8 = piVar1;
            if (1 < *piVar1 + 1U) {
              LOCK();
              *piVar1 = *piVar1 + 1;
              local_21 = *piVar1 != 0;
              UNLOCK();
            }
            piVar8 = piVar8 + 2;
            puVar7 = puVar7 + 1;
            lVar5 = lVar5 + -8;
          } while (lVar5 != 0);
        }
      }
      else {
        LOCK();
        *local_48 = *local_48 + 1;
        local_21 = *local_48 != 0;
        UNLOCK();
      }
    }
    puVar2 = PTR_s_addObject__1022692e8;
    local_40 = local_48 + (long)local_48[2] * 2 + 4;
    local_38 = local_48 + (long)local_48[3] * 2 + 4;
    if (local_48[2] != local_48[3]) {
      do {
        local_30 = 1;
        uVar6 = QByteArray::toNSData();
        uVar6 = _SecCertificateCreateWithData(0,uVar6);
        (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,puVar2,uVar6);
        local_40 = local_40 + 2;
      } while (local_40 != local_38);
    }
    local_30 = 1;
    FUN_1000ee530(&local_48);
    lVar5 = _SecPolicyCreateBasicX509();
    iVar3 = _SecTrustCreateWithCertificates(uVar4,lVar5,&local_50);
    if (iVar3 == 0) {
      _SecTrustEvaluate(local_50,&local_54);
      bVar9 = local_54 == 4 || local_54 == 1;
    }
    else {
      bVar9 = false;
    }
    if (local_50 != 0) {
      _CFRelease();
    }
    if (lVar5 != 0) {
      _CFRelease(lVar5);
    }
  }
  else {
    bVar9 = false;
  }
  return bVar9;
}

