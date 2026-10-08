
void FUN_100a45510(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  cfstringStruct *pcVar3;
  long lVar4;
  size_t sVar5;
  undefined8 uVar6;
  QArrayData *pQVar7;
  cfstringStruct *pcVar8;
  QArrayData *local_100;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined8 uStack_ec;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QUrl local_a0 [15];
  undefined1 local_91;
  undefined8 local_90;
  undefined1 local_88 [80];
  long local_38;
  
  lVar4 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar4;
  QUrl::QUrl(local_a0,param_2,0);
  QUrl::scheme();
  if (*(int *)(local_a8 + 4) != 0) {
    local_b0 = local_a8;
    if (1 < *(int *)local_a8 + 1U) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + 1;
      local_91 = *(int *)local_a8 != 0;
      UNLOCK();
    }
    FUN_100a42470(param_1,&local_b0);
    if (*(int *)local_b0 != -1) {
      if (*(int *)local_b0 != 0) {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + -1;
        local_91 = *(int *)local_b0 != 0;
        UNLOCK();
        if ((bool)local_91) goto LAB_100a455cf;
      }
      QArrayData::deallocate(local_b0,2,8);
    }
LAB_100a455cf:
    QString::toUtf8();
    if ((1 < *(uint *)local_b8) || (*(long *)(local_b8 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_b8,*(uint *)(local_b8 + 4) + 1,*(uint *)(local_b8 + 8) >> 0x1f)
      ;
    }
    uVar6 = *(undefined8 *)PTR__kCFAllocatorDefault_1021e18d0;
    uVar2 = _CFStringCreateWithCString(uVar6,local_b8 + *(long *)(local_b8 + 0x10),0x8000100);
    if (*(int *)local_b8 != -1) {
      if (*(int *)local_b8 != 0) {
        LOCK();
        *(int *)local_b8 = *(int *)local_b8 + -1;
        local_91 = *(int *)local_b8 != 0;
        UNLOCK();
        if ((bool)local_91) goto LAB_100a45673;
      }
      QArrayData::deallocate(local_b8,1,8);
    }
LAB_100a45673:
    pcVar3 = (cfstringStruct *)FUN_100a432b0();
    lVar4 = _CFStringCompare(pcVar3,*(undefined8 *)(param_1 + 8),0);
    if (lVar4 == 0) {
      pcVar3 = (cfstringStruct *)0x0;
    }
    pcVar8 = &cf_com_apple_safari;
    if (pcVar3 != (cfstringStruct *)0x0) {
      pcVar8 = pcVar3;
    }
    iVar1 = _LSFindApplicationForInfo(0,pcVar8,0,local_88,0);
    _CFRelease(pcVar8);
    _CFRelease(uVar2);
    lVar4 = *(long *)PTR____stack_chk_guard_1021e1840;
    if (iVar1 == 0) {
      local_d8 = 0;
      uStack_d0 = 0;
      uStack_e4 = 0;
      uStack_e0 = 0;
      local_f8 = 0;
      local_c8 = 0;
      uStack_f0 = 0x800;
      uStack_ec = local_88;
      QString::toUtf8();
      if ((*(uint *)local_100 < 2) && (*(long *)(local_100 + 0x10) == 0x18)) {
        pQVar7 = local_100 + *(long *)(local_100 + 0x10);
LAB_100a45775:
        if (*(long *)(local_100 + 0x10) != 0x18) goto LAB_100a4577c;
      }
      else {
        QByteArray::reallocData
                  (&local_100,*(uint *)(local_100 + 4) + 1,*(uint *)(local_100 + 8) >> 0x1f);
        pQVar7 = local_100 + *(long *)(local_100 + 0x10);
        if (*(uint *)local_100 < 2) goto LAB_100a45775;
LAB_100a4577c:
        QByteArray::reallocData
                  (&local_100,*(uint *)(local_100 + 4) + 1,*(uint *)(local_100 + 8) >> 0x1f);
      }
      sVar5 = _strlen((char *)(local_100 + *(long *)(local_100 + 0x10)));
      local_90 = _CFURLCreateWithBytes(uVar6,pQVar7,sVar5,0x8000100,0);
      uVar6 = _CFArrayCreate(uVar6,&local_90,1,PTR__kCFTypeArrayCallBacks_1021e1958);
      _LSOpenURLsWithRole(uVar6,0xffffffff,0,&local_f8,0,0);
      _CFRelease(local_90);
      _CFRelease(uVar6);
      if (*(int *)local_100 != -1) {
        if (*(int *)local_100 != 0) {
          LOCK();
          *(int *)local_100 = *(int *)local_100 + -1;
          local_91 = *(int *)local_100 != 0;
          UNLOCK();
          if ((bool)local_91) goto LAB_100a4584d;
        }
        QArrayData::deallocate(local_100,1,8);
      }
    }
  }
LAB_100a4584d:
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_91 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_91) goto LAB_100a45889;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_100a45889:
  QUrl::~QUrl(local_a0);
  if (lVar4 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

