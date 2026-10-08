
void FUN_100ad4000(long param_1,undefined8 param_2)

{
  QArrayData *pQVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  Data *pDVar5;
  long lVar6;
  Data *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  QByteArray::QByteArray((QByteArray *)&local_38,0x50,'\0');
  if ((1 < *(uint *)local_38) || (*(long *)(local_38 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_38,*(uint *)(local_38 + 4) + 1,*(uint *)(local_38 + 8) >> 0x1f);
  }
  pQVar1 = local_38;
  lVar6 = *(long *)(local_38 + 0x10);
  *(undefined4 *)(local_38 + lVar6) = 0x1b;
  *(undefined4 *)(local_38 + lVar6 + 8) = 0x50;
  bVar2 = CVmCoherence::isDisableDropShadow();
  *(uint *)(pQVar1 + lVar6 + 0x28) = bVar2 ^ 1;
  uVar4 = FUN_100319390(*(undefined8 *)(param_1 + 0x20));
  FUN_10018c2b0(uVar4);
  CVmConfiguration::getVmHardwareList();
  CVmHardware::getVideo();
  iVar3 = CVmVideo::getEnable3DAcceleration();
  *(uint *)(pQVar1 + lVar6 + 0x2c) = (uint)(iVar3 == 0);
  *(uint *)(pQVar1 + lVar6 + 0x30) = (uint)*(byte *)(param_1 + 0xad3);
  FUN_1000abcb0(&local_40,param_2);
  if (*(int *)(local_40 + 0xc) == *(int *)(local_40 + 8)) {
    FUN_100ace620(*(undefined8 *)(param_1 + 0xf8),&local_38);
  }
  else {
    pDVar5 = local_40 + (long)*(int *)(local_40 + 8) * 8 + 0x10;
    do {
      FUN_100ace5e0(*(undefined8 *)(param_1 + 0xf8),**(undefined8 **)pDVar5,&local_38);
      pDVar5 = pDVar5 + 8;
    } while (pDVar5 != local_40 + (long)*(int *)(local_40 + 0xc) * 8 + 0x10);
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100ad418f;
    }
    iVar3 = *(int *)(local_40 + 0xc);
    if (iVar3 != *(int *)(local_40 + 8)) {
      lVar6 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar3 * -8;
      pDVar5 = local_40 + (long)iVar3 * 8 + 8;
      do {
        if (*(void **)pDVar5 != (void *)0x0) {
          operator_delete(*(void **)pDVar5);
        }
        pDVar5 = pDVar5 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose(local_40);
  }
LAB_100ad418f:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_38,1,8);
  }
  return;
}

