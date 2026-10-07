
undefined4 FUN_1004a55a0(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  QArrayData *pQVar4;
  long lVar5;
  undefined4 uVar6;
  QArrayData *local_40;
  undefined1 local_31;
  
  uVar6 = 0xf0000003;
  if ((*(short *)(param_2 + 0x16) != 0) && (lVar5 = FUN_1002a6120(param_2,0,0), lVar5 != 0)) {
    local_40 = (QArrayData *)PTR_shared_null_100ba20d0;
    iVar2 = *(int *)(lVar5 + 8);
    iVar1 = iVar2 + 0x10;
    QByteArray::resize((int)&local_40);
    if ((1 < *(uint *)local_40) || (*(long *)(local_40 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_40,*(uint *)(local_40 + 4) + 1,*(uint *)(local_40 + 8) >> 0x1f)
      ;
    }
    pQVar4 = local_40;
    lVar3 = *(long *)(local_40 + 0x10);
    *(undefined4 *)(local_40 + lVar3) = 0x20000;
    *(undefined4 *)(local_40 + lVar3 + 4) = 0xd;
    *(undefined4 *)(local_40 + lVar3 + 8) = 0;
    *(int *)(local_40 + lVar3 + 0xc) = iVar1;
    FUN_1002a5990(lVar5,0,local_40 + lVar3 + 0x10,iVar2);
    uVar6 = 0;
    FUN_100434830(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0xf0),0x1896d,pQVar4 + lVar3,iVar1,
                  &DAT_1011ccb98,0);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        UNLOCK();
        if (*(int *)local_40 != 0) {
          return 0;
        }
        local_31 = 0;
      }
      QArrayData::deallocate(local_40,1,8);
    }
  }
  return uVar6;
}

