
undefined8 FUN_10021e9c0(long param_1)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  CVmConfiguration *pCVar4;
  long lVar5;
  void *pvVar6;
  uint uVar7;
  int *piVar8;
  undefined8 uVar9;
  Data_conflict *pDVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  bool bVar14;
  QVariant QVar15;
  Connection local_1a0 [8];
  Data_conflict local_198;
  undefined4 local_190;
  QVariant local_188;
  QArrayData *local_178;
  QString local_170;
  int *local_168;
  int *local_160;
  int *local_158;
  uint local_150;
  undefined4 local_148;
  undefined4 local_144;
  Data *local_140;
  CVmConfiguration local_138 [248];
  int *local_40;
  undefined1 local_31;
  
  FUN_100221b80(&local_40,(long *)(param_1 + 0x60));
  if (local_40[3] == local_40[2]) goto LAB_10021ede9;
  uVar9 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar9 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar9 = *(undefined8 *)(param_1 + 0x20);
  }
  pCVar4 = (CVmConfiguration *)FUN_10018c2b0(uVar9);
  CVmConfiguration::CVmConfiguration(local_138,pCVar4);
  local_140 = (Data *)PTR_shared_null_1021e15e8;
  local_144 = 4;
  FUN_100129840(&local_140,&local_144);
  local_148 = 5;
  FUN_100129840(&local_140,&local_148);
  local_168 = local_40;
  if (*local_40 != -1) {
    if (*local_40 == 0) {
      QListData::detach((int)&local_168);
      iVar1 = local_168[2];
      if (iVar1 != local_168[3]) {
        local_40 = local_40 + (long)local_40[2] * 2 + 4;
        piVar8 = local_168 + (long)iVar1 * 2 + 4;
        lVar5 = (long)local_168[3] * 8 + (long)iVar1 * -8;
        do {
          piVar2 = *(int **)local_40;
          *(int **)piVar8 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_31 = *piVar2 != 0;
            UNLOCK();
          }
          piVar8 = piVar8 + 2;
          local_40 = local_40 + 2;
          lVar5 = lVar5 + -8;
        } while (lVar5 != 0);
      }
    }
    else {
      LOCK();
      *local_40 = *local_40 + 1;
      local_31 = *local_40 != 0;
      UNLOCK();
    }
  }
  local_160 = local_168 + (long)local_168[2] * 2 + 4;
  local_158 = local_168 + (long)local_168[3] * 2 + 4;
  local_150 = 1;
  if (local_168[2] != local_168[3]) {
    do {
      local_170.field0_0x0 = *(QTypedArrayData<unsigned_short> **)local_160;
      if (1 < *(int *)local_170.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_170.field0_0x0 = *(int *)local_170.field0_0x0 + 1;
        local_31 = *(int *)local_170.field0_0x0 != 0;
        UNLOCK();
      }
      if (local_150 != 0) {
        if (1 < *(int *)local_170.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_170.field0_0x0 = *(int *)local_170.field0_0x0 + 1;
          local_31 = *(int *)local_170.field0_0x0 != 0;
          UNLOCK();
        }
        local_190 = 0x80000000;
        local_198.field7 = 0;
        lVar5 = *(long *)(*(long *)(param_1 + 0x60) + 0x10);
        local_178 = (QArrayData *)local_170.field0_0x0;
        lVar13 = 0;
        if (lVar5 == 0) {
LAB_10021ec18:
          lVar12 = 0;
        }
        else {
          do {
            while (lVar12 = lVar5, cVar3 = operator<((QString *)(lVar12 + 0x18),&local_170),
                  cVar3 != '\0') {
              lVar5 = *(long *)(lVar12 + 0x10);
              if (*(long *)(lVar12 + 0x10) == 0) {
                lVar12 = lVar13;
                if (lVar13 == 0) goto LAB_10021ec18;
                goto LAB_10021ec08;
              }
            }
            lVar5 = *(long *)(lVar12 + 8);
            lVar13 = lVar12;
          } while (*(long *)(lVar12 + 8) != 0);
LAB_10021ec08:
          cVar3 = operator<(&local_170,(QString *)(lVar12 + 0x18));
          if (cVar3 != '\0') goto LAB_10021ec18;
        }
        pDVar10 = (Data_conflict *)(lVar12 + 0x20);
        if (lVar12 == 0) {
          pDVar10 = &local_198;
        }
        QVariant::QVariant(&local_188,(QVariant *)pDVar10);
        QVar15.field0_0x0.field1_0x8.bitField0_30 = (FourByteBitField)&local_188;
        QVar15.field0_0x0.field0_0x0.field15 = (QObject *)&local_178;
        CVmConfiguration::setPropertyValue
                  ((QTypedArrayData<unsigned_short> *)local_138,QVar15,(bool *)0x0);
        QVariant::~QVariant(&local_188);
        QVariant::~QVariant((QVariant *)&local_198);
        if (*(int *)local_178 != -1) {
          if (*(int *)local_178 != 0) {
            LOCK();
            *(int *)local_178 = *(int *)local_178 + -1;
            local_31 = *(int *)local_178 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10021ec97;
          }
          QArrayData::deallocate(local_178,2,8);
        }
LAB_10021ec97:
        local_150 = 0;
      }
      if (*(int *)local_170.field0_0x0 != -1) {
        if (*(int *)local_170.field0_0x0 != 0) {
          LOCK();
          *(int *)local_170.field0_0x0 = *(int *)local_170.field0_0x0 + -1;
          local_31 = *(int *)local_170.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10021ecd7;
        }
        QArrayData::deallocate((QArrayData *)local_170.field0_0x0,2,8);
      }
LAB_10021ecd7:
      local_160 = local_160 + 2;
      uVar7 = local_150 ^ 1;
      bVar14 = local_150 != 1;
      local_150 = uVar7;
    } while ((bVar14) && (local_160 != local_158));
  }
  FUN_100039a80(&local_168);
  pvVar6 = operator_new(600);
  uVar9 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar9 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar9 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar11 = 0;
  if ((*(long *)(param_1 + 0x50) != 0) && (uVar11 = 0, *(int *)(*(long *)(param_1 + 0x50) + 4) != 0)
     ) {
    uVar11 = *(undefined8 *)(param_1 + 0x58);
  }
  FUN_100210650(pvVar6,local_138,uVar9,&local_140,uVar11);
  QObject::connect(local_1a0,pvVar6,"2taskFinished(PRL_RESULT)",param_1,
                   "1subTaskCompleted(PRL_RESULT)",0);
  QMetaObject::Connection::~Connection(local_1a0);
  CAbstractTask::setWaitForSubTaskCompletion();
  CAbstractTask::execute();
  if (*(int *)local_140 != -1) {
    if (*(int *)local_140 != 0) {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + -1;
      local_31 = *(int *)local_140 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10021eddd;
    }
    QListData::dispose(local_140);
  }
LAB_10021eddd:
  CVmConfiguration::~CVmConfiguration(local_138);
LAB_10021ede9:
  FUN_100039a80(&local_40);
  return 0;
}

