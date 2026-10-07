
undefined4 FUN_1004cd730(long *param_1,long param_2)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  QArrayData *pQVar4;
  undefined4 uVar5;
  QArrayData *pQVar6;
  long *plVar7;
  long lVar8;
  QString local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  long *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  if (*(short *)(param_2 + 0x16) != 2) {
    return 0xf0000003;
  }
  if (*(short *)(param_2 + 0x14) != 0) {
    return 0xf0000003;
  }
  lVar3 = FUN_1002a6120(param_2,0,0);
  if (lVar3 == 0) {
    return 0xf0000003;
  }
  uVar1 = *(uint *)(lVar3 + 8);
  lVar8 = (long)(int)uVar1;
  if (0x1000 < lVar8) {
    return 0xf0000003;
  }
  if ((int)uVar1 < 1) {
    local_48 = (QArrayData *)PTR_shared_null_100ba20d0;
  }
  else {
    pQVar4 = (QArrayData *)QArrayData::allocate(1,8,lVar8,0);
    local_48 = pQVar4;
    if (pQVar4 == (QArrayData *)0x0) {
      qBadAlloc();
    }
    *(uint *)(pQVar4 + 4) = uVar1;
    pQVar4 = pQVar4 + lVar8 + *(long *)(pQVar4 + 0x10);
    do {
      pQVar4[-1] = (QArrayData)0x0;
      pQVar4 = pQVar4 + -1;
    } while (pQVar4 != local_48 + *(long *)(local_48 + 0x10));
  }
  if (1 < *(uint *)local_48) {
    if ((*(uint *)(local_48 + 8) & 0x7fffffff) == 0) {
      local_48 = (QArrayData *)QArrayData::allocate(1,8,0,2);
    }
    else {
      FUN_1004d6920(&local_48,*(uint *)(local_48 + 4),*(uint *)(local_48 + 8) & 0x7fffffff,0);
    }
  }
  pQVar4 = local_48;
  FUN_1002a5990(lVar3,0,local_48 + *(long *)(local_48 + 0x10),lVar8);
  pQVar6 = pQVar4 + *(long *)(pQVar4 + 0x10);
  if (pQVar6 != (QArrayData *)0x0) {
    _strlen((char *)pQVar6);
  }
  QString::fromUtf8_helper((char *)&local_58,(int)pQVar6);
  QString::normalized(&local_50,&local_58,1,0);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004cd8be;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1004cd8be:
  FUN_1004cf920(&local_60,*param_1 + 0x48,&local_50);
  uVar5 = 0xf0000012;
  if (local_60 != (long *)0x0) {
    lVar3 = FUN_1004d93b0(local_60);
    uVar5 = 0xf000001c;
    if (lVar3 != 0) {
      QTextCodec::toUnicode((char *)&local_70);
      QString::QString(&local_40,0x2f);
      QString::section(&local_68,&local_70,&local_40,2,0xffffffff,0);
      if (*(int *)local_40.field0_0x0 != -1) {
        if (*(int *)local_40.field0_0x0 != 0) {
          LOCK();
          *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
          local_31 = *(int *)local_40.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004cd96e;
        }
        QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
      }
LAB_1004cd96e:
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_31 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004cd99e;
        }
        QArrayData::deallocate(local_70,2,8);
      }
LAB_1004cd99e:
      if (*(int *)(local_68 + 4) != 0) {
        plVar7 = (long *)0x0;
        if (local_60[0x10] != 0) {
          plVar7 = *(long **)(local_60[0x10] + 0x10);
        }
        (**(code **)(*plVar7 + 0x18))(plVar7,&local_68);
      }
      local_78 = (QArrayData *)PTR_shared_null_100ba20d0;
      uVar2 = FUN_1004e1f30(local_60,&local_68,&local_78);
      QTextCodec::fromUnicode(&local_80);
      QByteArray::append((char)&local_80);
      lVar3 = FUN_1002a6120(param_2,1,1);
      if (lVar3 == 0) {
        uVar5 = 0xf0000003;
      }
      else {
        uVar5 = 0xf0000009;
        if (*(uint *)(local_80.field0_0x0 + 4) <= *(uint *)(lVar3 + 8)) {
          FUN_1002a5a50(lVar3,0,(QArrayData *)
                                (local_80.field0_0x0 + *(long *)(local_80.field0_0x0 + 0x10)));
          *(undefined4 *)(lVar3 + 0x10) = *(undefined4 *)(local_80.field0_0x0 + 4);
          uVar5 = uVar2;
        }
      }
      if (*(int *)local_80.field0_0x0 != -1) {
        if (*(int *)local_80.field0_0x0 != 0) {
          LOCK();
          *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
          local_31 = *(int *)local_80.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004cda87;
        }
        QArrayData::deallocate((QArrayData *)local_80.field0_0x0,1,8);
      }
LAB_1004cda87:
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_31 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004cdab7;
        }
        QArrayData::deallocate(local_78,2,8);
      }
LAB_1004cdab7:
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_31 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004cdae7;
        }
        QArrayData::deallocate(local_68,2,8);
      }
    }
LAB_1004cdae7:
    LOCK();
    plVar7 = local_60 + 1;
    lVar3 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*local_60 + 0x10))(local_60);
    }
  }
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004cdb33;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1004cdb33:
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_31 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_31) {
        return uVar5;
      }
    }
    QArrayData::deallocate(pQVar4,1,8);
  }
  return uVar5;
}

