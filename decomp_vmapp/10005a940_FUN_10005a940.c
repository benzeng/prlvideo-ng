
void FUN_10005a940(QByteArray *param_1,int *param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  QDataStream *pQVar3;
  int iVar4;
  QArrayData *pQVar5;
  QArrayData *local_78;
  QString local_70;
  QArrayData *local_68;
  int local_60;
  int local_5c;
  QDataStream local_58 [39];
  undefined1 local_31;
  
  ___bzero(param_2,0x838);
  QDataStream::QDataStream(local_58,param_1);
  QDataStream::operator>>(local_58,&local_5c);
  *param_2 = local_5c;
  if ((local_5c - 4U < 4) && ((0xbU >> ((byte)(local_5c - 4U) & 0xf) & 1) != 0)) {
    puVar2 = operator_new(8);
    puVar1 = PTR_shared_null_100ba20d0;
    *puVar2 = PTR_shared_null_100ba20d0;
    *(undefined8 **)(param_2 + 6) = puVar2;
    puVar2 = operator_new(8);
    *puVar2 = PTR_shared_null_100ba2188;
    *(undefined8 **)(param_2 + 8) = puVar2;
    local_68 = (QArrayData *)puVar1;
    operator>>(local_58,(QByteArray *)&local_68);
    if ((1 < *(uint *)local_68) || (*(long *)(local_68 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_68,*(uint *)(local_68 + 4) + 1,*(uint *)(local_68 + 8) >> 0x1f)
      ;
    }
    _memcpy(param_2 + 1,local_68 + *(long *)(local_68 + 0x10),(long)(int)*(uint *)(local_68 + 4));
    pQVar3 = (QDataStream *)operator>>(local_58,*(QString **)(param_2 + 6));
    QDataStream::operator>>(pQVar3,&local_60);
    if (0 < local_60) {
      iVar4 = 0;
      do {
        local_70.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
        operator>>(local_58,&local_70);
        FUN_10000c490(*(undefined8 *)(param_2 + 8),&local_70);
        if (*(int *)local_70.field0_0x0 != -1) {
          if (*(int *)local_70.field0_0x0 != 0) {
            LOCK();
            *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
            local_31 = *(int *)local_70.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10005ab2b;
          }
          QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
        }
LAB_10005ab2b:
        iVar4 = iVar4 + 1;
      } while (iVar4 < local_60);
    }
    pQVar3 = (QDataStream *)QDataStream::operator>>(local_58,param_2 + 10);
    pQVar3 = (QDataStream *)QDataStream::operator>>(pQVar3,param_2 + 0xb);
    QDataStream::operator>>(pQVar3,param_2 + 0xc);
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10005ab8e;
      }
      QArrayData::deallocate(local_68,1,8);
    }
  }
  else {
    local_78 = (QArrayData *)PTR_shared_null_100ba20d0;
    operator>>(local_58,(QByteArray *)&local_78);
    if ((1 < *(uint *)local_78) || (*(long *)(local_78 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_78,*(uint *)(local_78 + 4) + 1,*(uint *)(local_78 + 8) >> 0x1f)
      ;
    }
    pQVar5 = local_78;
    _memcpy(param_2 + 1,local_78 + *(long *)(local_78 + 0x10),(long)(int)*(uint *)(local_78 + 4));
    if (*(uint *)pQVar5 != 0xffffffff) {
      if (*(uint *)pQVar5 != 0) {
        LOCK();
        *(uint *)pQVar5 = *(uint *)pQVar5 - 1;
        local_31 = *(uint *)pQVar5 != 0;
        UNLOCK();
        pQVar5 = local_78;
        if ((bool)local_31) goto LAB_10005ab8e;
      }
      QArrayData::deallocate(pQVar5,1,8);
    }
  }
LAB_10005ab8e:
  QDataStream::~QDataStream(local_58);
  return;
}

