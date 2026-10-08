
void FUN_100a459f0(undefined8 param_1,long *param_2)

{
  undefined1 auVar1 [16];
  int iVar2;
  undefined8 uVar3;
  cfstringStruct *pcVar4;
  void *pvVar5;
  undefined8 uVar6;
  uint uVar7;
  ulong uVar8;
  cfstringStruct *pcVar9;
  long lVar10;
  QArrayData *local_d8;
  QString local_d0;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined8 uStack_bc;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined1 local_89;
  undefined1 local_88 [80];
  long local_38;
  
  lVar10 = *(long *)PTR____stack_chk_guard_1021e1840;
  uVar6 = *(undefined8 *)PTR__kCFAllocatorDefault_1021e18d0;
  local_38 = lVar10;
  uVar3 = _CFStringCreateWithCString(uVar6,"mailto",0x8000100);
  pcVar4 = (cfstringStruct *)FUN_100a432b0();
  pcVar9 = &cf_com_apple_mail;
  if (pcVar4 != (cfstringStruct *)0x0) {
    pcVar9 = pcVar4;
  }
  iVar2 = _LSFindApplicationForInfo(0,pcVar9,0,local_88,0);
  _CFRelease(pcVar9);
  _CFRelease(uVar3);
  if (iVar2 == 0) {
    local_a8 = 0;
    uStack_a0 = 0;
    uStack_b4 = 0;
    uStack_b0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_98 = 0;
    uStack_bc = local_88;
    lVar10 = *param_2;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = (long)*(int *)(lVar10 + 0xc) - (long)*(int *)(lVar10 + 8);
    uVar8 = 0xffffffffffffffff;
    if (SUB168(auVar1 * ZEXT816(8),8) == 0) {
      uVar8 = SUB168(auVar1 * ZEXT816(8),0);
    }
    pvVar5 = operator_new__(uVar8);
    uVar7 = *(int *)(lVar10 + 0xc) - *(int *)(lVar10 + 8);
    uVar8 = (ulong)uVar7;
    if (uVar7 != 0 && *(int *)(lVar10 + 8) <= *(int *)(lVar10 + 0xc)) {
      lVar10 = 0;
      do {
        local_d0.field0_0x0 =
             (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("file:",5);
        QString::append(&local_d0);
        QString::toUtf8();
        uVar3 = _CFURLCreateWithBytes
                          (uVar6,local_d8 + *(long *)(local_d8 + 0x10),(long)*(int *)(local_d8 + 4),
                           0x8000100,0);
        *(undefined8 *)((long)pvVar5 + lVar10 * 8) = uVar3;
        if (*(int *)local_d8 != -1) {
          if (*(int *)local_d8 != 0) {
            LOCK();
            *(int *)local_d8 = *(int *)local_d8 + -1;
            local_89 = *(int *)local_d8 != 0;
            UNLOCK();
            if ((bool)local_89) goto LAB_100a45ba0;
          }
          QArrayData::deallocate(local_d8,1,8);
        }
LAB_100a45ba0:
        if (*(int *)local_d0.field0_0x0 != -1) {
          if (*(int *)local_d0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + -1;
            local_89 = *(int *)local_d0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_89) goto LAB_100a45bdc;
          }
          QArrayData::deallocate((QArrayData *)local_d0.field0_0x0,2,8);
        }
LAB_100a45bdc:
        lVar10 = lVar10 + 1;
        uVar8 = (long)*(int *)(*param_2 + 0xc) - (long)*(int *)(*param_2 + 8);
      } while (lVar10 < (long)uVar8);
    }
    uVar6 = _CFArrayCreate(uVar6,pvVar5,(long)(int)uVar8,PTR__kCFTypeArrayCallBacks_1021e1958);
    lVar10 = 0;
    _LSOpenURLsWithRole(uVar6,0xffffffff,0,&local_c8,0,0);
    if (*(int *)(*param_2 + 8) < *(int *)(*param_2 + 0xc)) {
      do {
        _CFRelease(*(undefined8 *)((long)pvVar5 + lVar10 * 8));
        lVar10 = lVar10 + 1;
      } while (lVar10 < (long)*(int *)(*param_2 + 0xc) - (long)*(int *)(*param_2 + 8));
    }
    operator_delete__(pvVar5);
    _CFRelease(uVar6);
    lVar10 = *(long *)PTR____stack_chk_guard_1021e1840;
  }
  if (lVar10 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

