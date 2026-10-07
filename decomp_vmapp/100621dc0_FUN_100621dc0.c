
void FUN_100621dc0(CProblemReport *param_1,undefined8 *param_2,long *param_3)

{
  CProblemReport *pCVar1;
  CProblemReport *this;
  int *piVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  undefined4 *puVar7;
  QDir local_88 [8];
  QArrayData *local_80;
  QFileInfo local_78 [8];
  QString local_70;
  QString local_68;
  QArrayData *local_60;
  QString local_58;
  QArrayData *local_50;
  QFile local_48 [23];
  undefined1 local_31;
  
  CProblemReport::CProblemReport(param_1);
  *(undefined ***)param_1 = &PTR_metaObject_100bc9220;
  *(undefined ***)(param_1 + 0x10) = &PTR_getXml_100bc94d0;
  *(undefined2 *)(param_1 + 600) = 1;
  param_1[0x25a] = (CProblemReport)0x1;
  piVar2 = (int *)*param_2;
  *(int **)(param_1 + 0x260) = piVar2;
  if (1 < *piVar2 + 1U) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    local_31 = *piVar2 != 0;
    UNLOCK();
  }
  puVar3 = PTR_shared_null_100ba20d0;
  pCVar1 = param_1 + 0x260;
  this = param_1 + 0x268;
  *(undefined **)(param_1 + 0x268) = PTR_shared_null_100ba20d0;
  param_1[0x274] = (CProblemReport)0x0;
  if (*(int *)(*param_3 + 4) == 0) {
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("","prl_problem_report_utils",2,"empty packed problem report creation");
    }
  }
  else {
    QFile::QFile(local_48,(QString *)pCVar1);
    QFile::remove((QString *)pCVar1);
    cVar4 = QFile::open(local_48,2);
    if (cVar4 == '\0') {
      QString::toUtf8();
      FUN_1008e3970("","prl_problem_report_utils",0,"Cannot Open Or Create Tar Archive \'%s\'",
                    local_50 + *(long *)(local_50 + 0x10));
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          local_31 = *(int *)local_50 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1006220f2;
        }
        QArrayData::deallocate(local_50,1,8);
      }
LAB_1006220f2:
      puVar7 = (undefined4 *)___cxa_allocate_exception(4);
      *puVar7 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(puVar7,PTR_typeinfo_100ba22d8,0);
    }
    lVar6 = QIODevice::write((char *)local_48,*(long *)(*param_3 + 0x10) + *param_3);
    if (lVar6 != *(int *)(*param_3 + 4)) {
      FUN_1008e3970("","prl_problem_report_utils",0,"Cannot write Tar Archive from data");
      puVar7 = (undefined4 *)___cxa_allocate_exception(4);
      *puVar7 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(puVar7,PTR_typeinfo_100ba22d8,0);
    }
    QFile::~QFile(local_48);
  }
  FUN_100622460(&local_58);
  QString::operator=((QString *)this,&local_58);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_31 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100621f2e;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_100621f2e:
  cVar4 = QFile::exists((QString *)this);
  if (cVar4 != '\0') {
    if (1 < DAT_1011b55f8) {
      QString::toUtf8();
      FUN_1008e3970("","prl_problem_report_utils",2,
                    "strange! temp directory %s already exists, clear it.",
                    local_60 + *(long *)(local_60 + 0x10));
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_31 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100621fb7;
        }
        QArrayData::deallocate(local_60,1,8);
      }
    }
LAB_100621fb7:
    cVar4 = FUN_1006d6ea0(this,3);
    if (cVar4 == '\0') {
      FUN_1008e3970("","prl_problem_report_utils",0,"cannot remove temp directory");
      puVar7 = (undefined4 *)___cxa_allocate_exception(4);
      *puVar7 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(puVar7,PTR_typeinfo_100ba22d8,0);
    }
  }
  cVar4 = QFile::exists((QString *)pCVar1);
  if (cVar4 == '\0') {
    local_70.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar3;
    QDir::QDir((QDir *)&local_68,&local_70);
    cVar4 = QDir::mkdir(&local_68);
    QDir::~QDir((QDir *)&local_68);
    if (*(int *)local_70.field0_0x0 != -1) {
      if (*(int *)local_70.field0_0x0 != 0) {
        LOCK();
        *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
        local_31 = *(int *)local_70.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100622174;
      }
      QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
    }
LAB_100622174:
    if (cVar4 != '\0') {
      return;
    }
    FUN_1008e3970("","prl_problem_report_utils",0,"Cannot create temp dir for tar files");
    puVar7 = (undefined4 *)___cxa_allocate_exception(4);
    *puVar7 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar7,PTR_typeinfo_100ba22d8,0);
  }
  QFileInfo::QFileInfo(local_78,(QString *)this);
  QFileInfo::dir();
  QDir::absolutePath();
  iVar5 = FUN_1006225b0(param_1,&local_80);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100622048;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100622048:
  QDir::~QDir(local_88);
  if (iVar5 == 0) {
    QFileInfo::~QFileInfo(local_78);
    return;
  }
  puVar7 = (undefined4 *)___cxa_allocate_exception(4);
  *puVar7 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(puVar7,PTR_typeinfo_100ba22d8,0);
}

