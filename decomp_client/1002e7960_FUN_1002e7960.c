
void FUN_1002e7960(long *param_1)

{
  Node *pNVar1;
  undefined *puVar2;
  QTextStream *pQVar3;
  Node *pNVar4;
  int iVar5;
  long *plVar6;
  char *pcVar7;
  QArrayData *local_c8;
  QTextStream *local_c0;
  QArrayData *local_b8;
  QString local_b0;
  QString local_a8;
  QString local_a0;
  QString local_98;
  QString local_90;
  QString local_88;
  QString local_80;
  QString local_78;
  QString local_70;
  QString local_68;
  QString local_60;
  QString local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  puVar2 = PTR_shared_null_1021e1288;
  local_b8 = (QArrayData *)PTR_shared_null_1021e1288;
  pQVar3 = operator_new(0x50);
  QTextStream::QTextStream(pQVar3,&local_b8,2);
  *(undefined **)(pQVar3 + 0x10) = puVar2;
  *(undefined4 *)(pQVar3 + 0x18) = 1;
  *(undefined4 *)(pQVar3 + 0x1c) = 0;
  pQVar3[0x20] = (QTextStream)0x1;
  pQVar3[0x21] = (QTextStream)0x0;
  *(undefined4 *)(pQVar3 + 0x28) = 2;
  *(undefined8 *)(pQVar3 + 0x44) = 0;
  *(undefined8 *)(pQVar3 + 0x3c) = 0;
  *(undefined8 *)(pQVar3 + 0x34) = 0;
  *(undefined8 *)(pQVar3 + 0x2c) = 0;
  local_c0 = pQVar3;
  QString::fromUtf8_helper((char *)&local_b0,0x1de5db3);
  QTextStream::operator<<(pQVar3,&local_b0);
  if (*(int *)local_b0.field0_0x0 != -1) {
    if (*(int *)local_b0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
      local_31 = *(int *)local_b0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002e7a4f;
    }
    QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
  }
LAB_1002e7a4f:
  if (local_c0[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<(local_c0,' ');
  }
  pQVar3 = local_c0;
  QString::fromUtf8_helper((char *)&local_a8,0x1de5dbf);
  QTextStream::operator<<(pQVar3,&local_a8);
  if (*(int *)local_a8.field0_0x0 != -1) {
    if (*(int *)local_a8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
      local_31 = *(int *)local_a8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002e7acd;
    }
    QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
  }
LAB_1002e7acd:
  if (local_c0[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<(local_c0,' ');
  }
  QDebug::putString((QChar *)&local_c0,*(long *)(*param_1 + 0x10) + *param_1);
  if (local_c0[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<(local_c0,' ');
  }
  pQVar3 = local_c0;
  QString::fromUtf8_helper((char *)&local_a0,0x1de5dcb);
  QTextStream::operator<<(pQVar3,&local_a0);
  if (*(int *)local_a0.field0_0x0 != -1) {
    if (*(int *)local_a0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
      local_31 = *(int *)local_a0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002e7b82;
    }
    QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
  }
LAB_1002e7b82:
  if (local_c0[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<(local_c0,' ');
  }
  QTextStream::operator<<(local_c0,(int)param_1[1]);
  if (local_c0[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<(local_c0,' ');
  }
  pQVar3 = local_c0;
  iVar5 = 0x1e41978;
  if (4 < (int)param_1[1]) {
    iVar5 = 0x1de5dd8;
  }
  QString::fromUtf8_helper((char *)&local_98,iVar5);
  QTextStream::operator<<(pQVar3,&local_98);
  if (*(int *)local_98.field0_0x0 != -1) {
    if (*(int *)local_98.field0_0x0 != 0) {
      LOCK();
      *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
      local_31 = *(int *)local_98.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002e7c48;
    }
    QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
  }
LAB_1002e7c48:
  if (local_c0[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<(local_c0,' ');
  }
  pQVar3 = local_c0;
  QString::fromUtf8_helper((char *)&local_90,0x1de5de4);
  QTextStream::operator<<(pQVar3,&local_90);
  if (*(int *)local_90.field0_0x0 != -1) {
    if (*(int *)local_90.field0_0x0 != 0) {
      LOCK();
      *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
      local_31 = *(int *)local_90.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002e7cc6;
    }
    QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
  }
LAB_1002e7cc6:
  if (local_c0[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<(local_c0,' ');
  }
  if (*(char *)((long)param_1 + 0xc) == '\0') {
    pcVar7 = "false";
  }
  else {
    pcVar7 = "true";
  }
  QTextStream::operator<<(local_c0,pcVar7);
  if (local_c0[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<(local_c0,' ');
  }
  pQVar3 = local_c0;
  QString::fromUtf8_helper((char *)&local_88,0x1de5e01);
  QTextStream::operator<<(pQVar3,&local_88);
  if (*(int *)local_88.field0_0x0 != -1) {
    if (*(int *)local_88.field0_0x0 != 0) {
      LOCK();
      *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
      local_31 = *(int *)local_88.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002e7d78;
    }
    QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
  }
LAB_1002e7d78:
  if (local_c0[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<(local_c0,' ');
  }
  QDebug::putString((QChar *)&local_c0,*(long *)(param_1[2] + 0x10) + param_1[2]);
  if (local_c0[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<(local_c0,' ');
  }
  pQVar3 = local_c0;
  QString::fromUtf8_helper((char *)&local_80,0x1de5e11);
  QTextStream::operator<<(pQVar3,&local_80);
  if (*(int *)local_80.field0_0x0 != -1) {
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      local_31 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002e7e22;
    }
    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
  }
LAB_1002e7e22:
  if (local_c0[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<(local_c0,' ');
  }
  QTextStream::operator<<(local_c0,*(uint *)(param_1 + 4));
  if (local_c0[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<(local_c0,' ');
  }
  pQVar3 = local_c0;
  QString::fromUtf8_helper((char *)&local_78,0x1de5e1a);
  QTextStream::operator<<(pQVar3,&local_78);
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_31 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002e7ec1;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_1002e7ec1:
  if (local_c0[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<(local_c0,' ');
  }
  QTextStream::operator<<(local_c0,*(uint *)(param_1 + 3));
  if (local_c0[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<(local_c0,' ');
  }
  pQVar3 = local_c0;
  QString::fromUtf8_helper((char *)&local_70,0x1de5e2b);
  QTextStream::operator<<(pQVar3,&local_70);
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_31 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002e7f60;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_1002e7f60:
  if (local_c0[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<(local_c0,' ');
  }
  QTextStream::operator<<(local_c0,*(int *)((long)param_1 + 0x1c));
  if (local_c0[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<(local_c0,' ');
  }
  pQVar3 = local_c0;
  QString::fromUtf8_helper((char *)&local_68,0x1de5e3a);
  QTextStream::operator<<(pQVar3,&local_68);
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_31 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002e7fff;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_1002e7fff:
  if (local_c0[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<(local_c0,' ');
  }
  QTextStream::operator<<(local_c0,(int)param_1[5]);
  if (local_c0[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<(local_c0,' ');
  }
  pQVar3 = local_c0;
  QString::fromUtf8_helper((char *)&local_60,0x1de5e52);
  QTextStream::operator<<(pQVar3,&local_60);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_31 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002e809e;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_1002e809e:
  if (local_c0[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<(local_c0,' ');
  }
  QDebug::putString((QChar *)&local_c0,*(long *)(param_1[6] + 0x10) + param_1[6]);
  if (local_c0[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<(local_c0,' ');
  }
  pQVar3 = local_c0;
  QString::fromUtf8_helper((char *)&local_58,0x1de5e60);
  QTextStream::operator<<(pQVar3,&local_58);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_31 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002e8148;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_1002e8148:
  if (local_c0[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<(local_c0,' ');
  }
  QDebug::putString((QChar *)&local_c0,*(long *)(param_1[7] + 0x10) + param_1[7]);
  if (local_c0[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<(local_c0,' ');
  }
  pQVar3 = local_c0;
  QString::fromUtf8_helper((char *)&local_50,0x1de5e6d);
  QTextStream::operator<<(pQVar3,&local_50);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002e81f2;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_1002e81f2:
  if (local_c0[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<(local_c0,' ');
  }
  if ((char)param_1[8] == '\0') {
    pcVar7 = "false";
  }
  else {
    pcVar7 = "true";
  }
  QTextStream::operator<<(local_c0,pcVar7);
  if (local_c0[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<(local_c0,' ');
  }
  pNVar1 = (Node *)param_1[0xd];
  iVar5 = *(int *)(pNVar1 + 0x20);
  pNVar4 = pNVar1;
  if (iVar5 != 0) {
    plVar6 = *(long **)(pNVar1 + 8);
    do {
      pNVar4 = (Node *)*plVar6;
      if ((Node *)*plVar6 != pNVar1) break;
      iVar5 = iVar5 + -1;
      plVar6 = plVar6 + 1;
      pNVar4 = pNVar1;
    } while (iVar5 != 0);
  }
  if (pNVar4 != pNVar1) {
    do {
      pQVar3 = local_c0;
      QString::fromUtf8_helper((char *)&local_48,0x1eeaa60);
      QTextStream::operator<<(pQVar3,&local_48);
      if (*(int *)local_48.field0_0x0 != -1) {
        if (*(int *)local_48.field0_0x0 != 0) {
          LOCK();
          *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
          local_31 = *(int *)local_48.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002e82f8;
        }
        QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
      }
LAB_1002e82f8:
      if (local_c0[0x20] != (QTextStream)0x0) {
        QTextStream::operator<<(local_c0,' ');
      }
      QDebug::putString((QChar *)&local_c0,
                        *(long *)(*(long *)(pNVar4 + 0x10) + 0x10) + *(long *)(pNVar4 + 0x10));
      if (local_c0[0x20] != (QTextStream)0x0) {
        QTextStream::operator<<(local_c0,' ');
      }
      pQVar3 = local_c0;
      QString::fromUtf8_helper((char *)&local_40,0x1e31af0);
      QTextStream::operator<<(pQVar3,&local_40);
      if (*(int *)local_40.field0_0x0 != -1) {
        if (*(int *)local_40.field0_0x0 != 0) {
          LOCK();
          *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
          local_31 = *(int *)local_40.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002e8397;
        }
        QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
      }
LAB_1002e8397:
      if (local_c0[0x20] != (QTextStream)0x0) {
        QTextStream::operator<<(local_c0,' ');
      }
      QDebug::putString((QChar *)&local_c0,
                        *(long *)(*(long *)(pNVar4 + 0x18) + 0x10) + *(long *)(pNVar4 + 0x18));
      if (local_c0[0x20] != (QTextStream)0x0) {
        QTextStream::operator<<(local_c0,' ');
      }
      pNVar4 = (Node *)QHashData::nextNode(pNVar4);
    } while (pNVar4 != (Node *)param_1[0xd]);
  }
  QString::toUtf8();
  if ((1 < *(uint *)local_c8) || (*(long *)(local_c8 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_c8,*(uint *)(local_c8 + 4) + 1,*(uint *)(local_c8 + 8) >> 0x1f);
  }
  FUN_100df99c0("[TASK_PROMO]","prl_client_app",0,"%s",local_c8 + *(long *)(local_c8 + 0x10));
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_31 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002e8497;
    }
    QArrayData::deallocate(local_c8,1,8);
  }
LAB_1002e8497:
  QDebug::~QDebug((QDebug *)&local_c0);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      UNLOCK();
      if (*(int *)local_b8 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
  return;
}

