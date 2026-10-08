
char * FUN_1006925f0(long param_1,long param_2,QObject *param_3)

{
  code *pcVar1;
  int iVar2;
  QObject *pQVar3;
  undefined8 *puVar4;
  Data *pDVar5;
  char cVar6;
  uint uVar7;
  QArrayData *pQVar8;
  QArrayData *pQVar9;
  QArrayData *pQVar10;
  char *pcVar11;
  Data *pDVar12;
  Data_conflict *pDVar13;
  undefined8 *puVar14;
  long lVar15;
  Connection local_c0 [8];
  QVariant local_b8;
  undefined4 local_a4;
  _func_void_Node_ptr *local_a0;
  QObject *local_98;
  QObject *pQStack_90;
  Data_conflict local_88;
  uint uStack_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  Data *local_60;
  char *local_58;
  QObject *local_50;
  QVariant local_48;
  bool local_31;
  
  local_50 = param_3;
  if (param_2 == 0) {
    FUN_100df99c0("[ACTION_MNG]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "0 != prototype","ActionManager/CActionStorage.cpp",0x2b,"addAction");
  }
  if (param_3 == (QObject *)0x0) {
    FUN_100df99c0("[ACTION_MNG]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "0 != context","ActionManager/CActionStorage.cpp",0x2c,"addAction");
  }
  local_60 = (Data *)PTR_shared_null_1021e15e8;
  pQVar8 = (QArrayData *)QString::fromAscii_helper("visible",7);
  local_68 = pQVar8;
  FUN_1000341d0(&local_60,&local_68);
  pQVar9 = (QArrayData *)QString::fromAscii_helper("enabled",7);
  local_70 = pQVar9;
  FUN_1000341d0(&local_60,&local_70);
  pQVar10 = (QArrayData *)QString::fromAscii_helper("shortcut",8);
  local_78 = pQVar10;
  FUN_1000341d0(&local_60,&local_78);
  pcVar11 = (char *)FUN_10068e430(param_2,param_1,2,&local_60);
  if (*(int *)pQVar10 != -1) {
    if (*(int *)pQVar10 != 0) {
      LOCK();
      *(int *)pQVar10 = *(int *)pQVar10 + -1;
      UNLOCK();
      local_31 = *(int *)pQVar10 != 0;
      if (*(int *)pQVar10 != 0) goto LAB_100692766;
    }
    QArrayData::deallocate(pQVar10,2,8);
  }
LAB_100692766:
  if (*(int *)pQVar9 != -1) {
    if (*(int *)pQVar9 != 0) {
      LOCK();
      *(int *)pQVar9 = *(int *)pQVar9 + -1;
      UNLOCK();
      local_31 = *(int *)pQVar9 != 0;
      if (*(int *)pQVar9 != 0) goto LAB_100692793;
    }
    QArrayData::deallocate(pQVar9,2,8);
  }
LAB_100692793:
  if (*(int *)pQVar8 != -1) {
    if (*(int *)pQVar8 != 0) {
      LOCK();
      *(int *)pQVar8 = *(int *)pQVar8 + -1;
      UNLOCK();
      local_31 = *(int *)pQVar8 != 0;
      if (*(int *)pQVar8 != 0) goto LAB_1006927c1;
    }
    QArrayData::deallocate(pQVar8,2,8);
  }
LAB_1006927c1:
  pDVar5 = local_60;
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      UNLOCK();
      local_31 = *(int *)local_60 != 0;
      if (*(int *)local_60 != 0) goto LAB_100692851;
    }
    iVar2 = *(int *)(local_60 + 0xc);
    if (iVar2 != *(int *)(local_60 + 8)) {
      lVar15 = (long)*(int *)(local_60 + 8) * 8 + (long)iVar2 * -8;
      pDVar12 = local_60 + (long)iVar2 * 8 + 8;
      do {
        pQVar8 = *(QArrayData **)pDVar12;
        if (*(int *)pQVar8 == 0) {
LAB_100692830:
          QArrayData::deallocate(pQVar8,2,8);
        }
        else if (*(int *)pQVar8 != -1) {
          LOCK();
          *(int *)pQVar8 = *(int *)pQVar8 + -1;
          local_31 = *(int *)pQVar8 != 0;
          UNLOCK();
          if (!local_31) {
            pQVar8 = *(QArrayData **)pDVar12;
            goto LAB_100692830;
          }
        }
        pDVar12 = pDVar12 + -8;
        lVar15 = lVar15 + 8;
      } while (lVar15 != 0);
    }
    QListData::dispose(pDVar5);
  }
LAB_100692851:
  local_98 = (QObject *)0x0;
  local_58 = pcVar11;
  uStack_80 = 0x80000000;
  local_88.field7 = 0;
  if (param_3 != (QObject *)0x0) {
    local_98 = (QObject *)QtSharedPointer::ExternalRefCountData::getAndRef(param_3);
  }
  pQStack_90 = param_3;
  if (DAT_10226c7b8 == 0) {
    DAT_10226c7b8 = FUN_100086f00("QPointer<QObject>",0xffffffffffffffff,1);
  }
  uVar7 = uStack_80 & 0x40000000;
  if (((uVar7 == 0) || (*(int *)(local_88.field7 + 8) == 1)) &&
     ((DAT_10226c7b8 == (uStack_80 & 0x3fffffff) || ((uStack_80 & 0x3fffffff | DAT_10226c7b8) < 8)))
     ) {
    uStack_80 = DAT_10226c7b8 & 0x3fffffff | uVar7;
    if (uVar7 == 0) {
      pDVar13 = &local_88;
    }
    else {
      pDVar13 = *(Data_conflict **)local_88.field15;
    }
    pQVar3 = pDVar13->field15;
    if (pQVar3 != (QObject *)0x0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      local_31 = *(int *)pQVar3 != 0;
      if ((*(int *)pQVar3 == 0) && (pDVar13->field16 != (void *)0x0)) {
        operator_delete(pDVar13->field16);
      }
    }
    pDVar13->field15 = local_98;
    pDVar13[1].field15 = pQStack_90;
    if (local_98 != (QObject *)0x0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + 1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
    }
  }
  else {
    QVariant::QVariant(&local_48,DAT_10226c7b8,&local_98,0);
    QVariant::operator=((QVariant *)&local_88,&local_48);
    QVariant::~QVariant(&local_48);
  }
  pcVar11 = local_58;
  QObject::setProperty(local_58,(QVariant *)PTR_s_contextValue_1021f54d0);
  puVar4 = *(undefined8 **)(param_1 + 0x10);
  if ((*(int *)((long)puVar4 + 0x14) != 0) && (*(uint *)(puVar4 + 4) != 0)) {
    uVar7 = (uint)((ulong)local_50 >> 0x1f) ^ (uint)local_50 ^ *(uint *)((long)puVar4 + 0x24);
    for (puVar14 = *(undefined8 **)(puVar4[1] + ((ulong)uVar7 % (ulong)*(uint *)(puVar4 + 4)) * 8);
        puVar14 != puVar4; puVar14 = (undefined8 *)*puVar14) {
      if ((*(uint *)(puVar14 + 1) == uVar7) && (local_50 == (QObject *)puVar14[2])) {
        if (puVar14 != puVar4) {
          FUN_100694130(&local_a0,puVar14 + 3);
          goto LAB_1006929e8;
        }
        break;
      }
    }
  }
  local_a0 = (_func_void_Node_ptr *)PTR_shared_null_1021e15d0;
LAB_1006929e8:
  local_a4 = FUN_1006947d0(pcVar11);
  FUN_100693880(&local_a0,&local_a4,&local_58);
  FUN_100693a20(param_1 + 0x10,&local_50,&local_a0);
  QObject::property((char *)&local_b8);
  cVar6 = QVariant::toBool();
  QVariant::~QVariant(&local_b8);
  if (cVar6 == '\0') {
    QObject::connect(local_c0,pcVar11,"2triggered()",param_1,"1onActionTriggered()",2);
    QMetaObject::Connection::~Connection(local_c0);
  }
  if (*(int *)(local_a0 + 0x10) != -1) {
    if (*(int *)(local_a0 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_a0 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if (local_31) goto LAB_100692ab9;
    }
    QHashData::free_helper(local_a0);
  }
LAB_100692ab9:
  if (local_98 != (QObject *)0x0) {
    LOCK();
    *(int *)local_98 = *(int *)local_98 + -1;
    local_31 = *(int *)local_98 != 0;
    UNLOCK();
    if ((!local_31) && (local_98 != (QObject *)0x0)) {
      operator_delete(local_98);
    }
  }
  QVariant::~QVariant((QVariant *)&local_88);
  return pcVar11;
}

