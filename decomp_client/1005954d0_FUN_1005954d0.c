
undefined1 FUN_1005954d0(QWidget *param_1,QHash *param_2,long *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  char *pcVar7;
  size_t sVar8;
  Node *pNVar9;
  Node *pNVar10;
  Node *pNVar11;
  undefined8 *puVar12;
  _func_void_Node_ptr *p_Var13;
  QArrayData *local_150;
  QArrayData *local_148;
  QArrayData *local_140;
  QArrayData *local_98;
  Data_conflict local_90;
  undefined4 local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QString local_70;
  QVariant local_68;
  QString local_58;
  QVariant local_50;
  QHash *local_40;
  undefined1 local_31;
  
  local_40 = param_2;
  QObject::property((char *)&local_50);
  cVar4 = QVariant::toBool();
  QVariant::~QVariant(&local_50);
  if (cVar4 == '\0') {
    uVar5 = CDataProvider::getWidgetValues(param_1,local_40);
    return uVar5;
  }
  QObject::property((char *)&local_68);
  QVariant::toString();
  QVariant::~QVariant(&local_68);
  if (*(int *)(local_58.field0_0x0 + 4) == 0) {
    local_78 = (QArrayData *)QString::fromAscii_helper("get%1Value",10);
    (*(code *)**(undefined8 **)local_40)();
    pcVar7 = (char *)QMetaObject::className();
    iVar6 = -1;
    if (pcVar7 != (char *)0x0) {
      sVar8 = _strlen(pcVar7);
      iVar6 = (int)sVar8;
    }
    local_80 = (QArrayData *)QString::fromAscii_helper(pcVar7,iVar6);
    QString::arg(&local_70,&local_78,&local_80,0,0x20);
    QString::operator=(&local_58,&local_70);
    if (*(int *)local_70.field0_0x0 != -1) {
      if (*(int *)local_70.field0_0x0 != 0) {
        LOCK();
        *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
        local_31 = *(int *)local_70.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100595607;
      }
      QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
    }
LAB_100595607:
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_31 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100595637;
      }
      QArrayData::deallocate(local_80,2,8);
    }
LAB_100595637:
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100595667;
      }
      QArrayData::deallocate(local_78,2,8);
    }
  }
LAB_100595667:
  pNVar9 = (Node *)*param_3;
  if (*(uint *)(pNVar9 + 0x10) < 2) goto LAB_1005956e1;
  pNVar9 = (Node *)QHashData::detach_helper
                             ((_func_void_Node_ptr_void_ptr *)pNVar9,FUN_1003b0210,0x3b0080,0x20);
  p_Var13 = (_func_void_Node_ptr *)*param_3;
  if (*(int *)(p_Var13 + 0x10) != -1) {
    if (*(int *)(p_Var13 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var13 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005956d7;
      p_Var13 = (_func_void_Node_ptr *)*param_3;
    }
    QHashData::free_helper(p_Var13);
  }
LAB_1005956d7:
  *param_3 = (long)pNVar9;
LAB_1005956e1:
  iVar6 = *(int *)(pNVar9 + 0x20);
  pNVar11 = pNVar9;
  if (iVar6 != 0) {
    puVar12 = *(undefined8 **)(pNVar9 + 8);
    do {
      pNVar11 = (Node *)*puVar12;
      if ((Node *)*puVar12 != pNVar9) break;
      iVar6 = iVar6 + -1;
      puVar12 = puVar12 + 1;
      pNVar11 = pNVar9;
    } while (iVar6 != 0);
  }
  uVar5 = 0;
LAB_10059572a:
  if (1 < *(uint *)(pNVar9 + 0x10)) {
    pNVar9 = (Node *)QHashData::detach_helper
                               ((_func_void_Node_ptr_void_ptr *)pNVar9,FUN_1003b0210,0x3b0080,0x20);
    p_Var13 = (_func_void_Node_ptr *)*param_3;
    if (*(int *)(p_Var13 + 0x10) != -1) {
      if (*(int *)(p_Var13 + 0x10) != 0) {
        LOCK();
        pcVar1 = p_Var13 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        local_31 = *(int *)pcVar1 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100595790;
        p_Var13 = (_func_void_Node_ptr *)*param_3;
      }
      QHashData::free_helper(p_Var13);
    }
LAB_100595790:
    *param_3 = (long)pNVar9;
  }
  if (pNVar11 == pNVar9) {
    if (*(int *)local_58.field0_0x0 != -1) {
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        UNLOCK();
        if (*(int *)local_58.field0_0x0 != 0) {
          return uVar5;
        }
        local_31 = 0;
      }
      QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
    }
    return uVar5;
  }
  pNVar9 = *(Node **)(pNVar11 + 0x18);
  if (*(uint *)(pNVar9 + 0x10) < 2) goto LAB_100595806;
  pNVar9 = (Node *)QHashData::detach_helper
                             ((_func_void_Node_ptr_void_ptr *)pNVar9,FUN_100076890,0x76530,0x28);
  p_Var13 = *(_func_void_Node_ptr **)(pNVar11 + 0x18);
  if (*(int *)(p_Var13 + 0x10) != -1) {
    if (*(int *)(p_Var13 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var13 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100595802;
      p_Var13 = *(_func_void_Node_ptr **)(pNVar11 + 0x18);
    }
    QHashData::free_helper(p_Var13);
  }
LAB_100595802:
  *(Node **)(pNVar11 + 0x18) = pNVar9;
LAB_100595806:
  iVar6 = *(int *)(pNVar9 + 0x20);
  pNVar10 = pNVar9;
  if (iVar6 != 0) {
    puVar12 = *(undefined8 **)(pNVar9 + 8);
    do {
      pNVar10 = (Node *)*puVar12;
      if ((Node *)*puVar12 != pNVar9) break;
      iVar6 = iVar6 + -1;
      puVar12 = puVar12 + 1;
      pNVar10 = pNVar9;
    } while (iVar6 != 0);
  }
  do {
    if (1 < *(uint *)(pNVar9 + 0x10)) {
      pNVar9 = (Node *)QHashData::detach_helper
                                 ((_func_void_Node_ptr_void_ptr *)pNVar9,FUN_100076890,0x76530,0x28)
      ;
      p_Var13 = *(_func_void_Node_ptr **)(pNVar11 + 0x18);
      if (*(int *)(p_Var13 + 0x10) != -1) {
        if (*(int *)(p_Var13 + 0x10) != 0) {
          LOCK();
          pcVar1 = p_Var13 + 0x10;
          *(int *)pcVar1 = *(int *)pcVar1 + -1;
          local_31 = *(int *)pcVar1 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005958b2;
          p_Var13 = *(_func_void_Node_ptr **)(pNVar11 + 0x18);
        }
        QHashData::free_helper(p_Var13);
      }
LAB_1005958b2:
      *(Node **)(pNVar11 + 0x18) = pNVar9;
    }
    if (pNVar10 == pNVar9) break;
    local_88 = 0x80000000;
    local_90.field7 = 0;
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    QString::toLatin1();
    cVar4 = QMetaObject::invokeMethod
                      (uVar2,local_98 + *(long *)(local_98 + 0x10),1,&local_90,"QVariant");
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_31 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100595abc;
      }
      QArrayData::deallocate(local_98,1,8);
    }
LAB_100595abc:
    if (cVar4 == '\0') {
      QObject::objectName();
      QString::toUtf8();
      lVar3 = *(long *)(local_140 + 0x10);
      QString::toLatin1();
      FUN_100df99c0("","prl_client_app",0,"(!)Error: Control[%s]: failed to invoke %s",
                    local_140 + lVar3,local_150 + *(long *)(local_150 + 0x10));
      if (*(int *)local_150 != -1) {
        if (*(int *)local_150 != 0) {
          LOCK();
          *(int *)local_150 = *(int *)local_150 + -1;
          local_31 = *(int *)local_150 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100595b6a;
        }
        QArrayData::deallocate(local_150,1,8);
      }
LAB_100595b6a:
      if (*(int *)local_140 != -1) {
        if (*(int *)local_140 != 0) {
          LOCK();
          *(int *)local_140 = *(int *)local_140 + -1;
          local_31 = *(int *)local_140 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100595ba0;
        }
        QArrayData::deallocate(local_140,1,8);
      }
LAB_100595ba0:
      if (*(int *)local_148 != -1) {
        if (*(int *)local_148 != 0) {
          LOCK();
          *(int *)local_148 = *(int *)local_148 + -1;
          local_31 = *(int *)local_148 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100595850;
        }
        QArrayData::deallocate(local_148,2,8);
      }
    }
LAB_100595850:
    QVariant::operator=((QVariant *)(pNVar10 + 0x18),(QVariant *)&local_90);
    QVariant::~QVariant((QVariant *)&local_90);
    pNVar10 = (Node *)QHashData::nextNode(pNVar10);
    pNVar9 = *(Node **)(pNVar11 + 0x18);
    uVar5 = 1;
  } while( true );
  pNVar11 = (Node *)QHashData::nextNode(pNVar11);
  pNVar9 = (Node *)*param_3;
  goto LAB_10059572a;
}

