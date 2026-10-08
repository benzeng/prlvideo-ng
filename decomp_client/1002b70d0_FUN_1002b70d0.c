
void FUN_1002b70d0(long param_1)

{
  CProgressDialog *this;
  int *piVar1;
  int *piVar2;
  long lVar3;
  QString *pQVar4;
  QFont *pQVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  int iVar8;
  long local_58;
  QArrayData *local_50;
  QString local_48;
  QFont local_40 [16];
  QArrayData *local_30;
  undefined1 local_21;
  
  lVar3 = *(long *)(param_1 + 0x40);
  if (((lVar3 == 0) || (*(int *)(lVar3 + 4) == 0)) || (*(long *)(param_1 + 0x48) == 0)) {
    this = operator_new(0x70);
    CProgressDialog::CProgressDialog(this,(QWidget *)0x0);
    piVar1 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef((QObject *)this);
    piVar2 = *(int **)(param_1 + 0x40);
    if (piVar2 != piVar1) {
      if (piVar1 != (int *)0x0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        local_21 = *piVar1 != 0;
        UNLOCK();
        piVar2 = *(int **)(param_1 + 0x40);
      }
      if (piVar2 != (int *)0x0) {
        LOCK();
        *piVar2 = *piVar2 + -1;
        local_21 = *piVar2 != 0;
        UNLOCK();
        if ((!(bool)local_21) && (*(void **)(param_1 + 0x40) != (void *)0x0)) {
          operator_delete(*(void **)(param_1 + 0x40));
        }
      }
      *(int **)(param_1 + 0x40) = piVar1;
      *(CProgressDialog **)(param_1 + 0x48) = this;
    }
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      local_21 = *piVar1 != 0;
      UNLOCK();
      if (!(bool)local_21) {
        operator_delete(piVar1);
      }
    }
    pQVar4 = (QString *)0x0;
    if ((*(long *)(param_1 + 0x40) != 0) &&
       (pQVar4 = (QString *)0x0, *(int *)(*(long *)(param_1 + 0x40) + 4) != 0)) {
      pQVar4 = *(QString **)(param_1 + 0x48);
    }
    FUN_1001c72e0(&local_30);
    QWidget::setWindowTitle(pQVar4);
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        local_21 = *(int *)local_30 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1002b71d8;
      }
      QArrayData::deallocate(local_30,2,8);
    }
LAB_1002b71d8:
    uVar7 = false;
    if ((*(long *)(param_1 + 0x40) != 0) &&
       (uVar7 = false, *(int *)(*(long *)(param_1 + 0x40) + 4) != 0)) {
      uVar7 = (undefined1)*(undefined8 *)(param_1 + 0x48);
    }
    pQVar5 = (QFont *)0x0;
    QDialog::setModal((bool)uVar7);
    if ((*(long *)(param_1 + 0x40) != 0) &&
       (pQVar5 = (QFont *)0x0, *(int *)(*(long *)(param_1 + 0x40) + 4) != 0)) {
      pQVar5 = *(QFont **)(param_1 + 0x48);
    }
    FontUtils::getSmallFont(SUB81(local_40,0));
    CProgressDialog::setTextFont(pQVar5);
    QFont::~QFont(local_40);
    pQVar4 = (QString *)0x0;
    if ((*(long *)(param_1 + 0x40) != 0) &&
       (pQVar4 = (QString *)0x0, *(int *)(*(long *)(param_1 + 0x40) + 4) != 0)) {
      pQVar4 = *(QString **)(param_1 + 0x48);
    }
    QMetaObject::tr((char *)&local_48,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_Downloading_the_Windows_7_look_i_1022707e8);
    local_50 = (QArrayData *)PTR_shared_null_1021e1288;
    CProgressDialog::setText(pQVar4,&local_48);
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_21 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1002b72b5;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_1002b72b5:
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_21 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1002b72e5;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
LAB_1002b72e5:
    iVar8 = 0;
    if ((*(long *)(param_1 + 0x40) != 0) &&
       (iVar8 = 0, *(int *)(*(long *)(param_1 + 0x40) + 4) != 0)) {
      iVar8 = (int)*(undefined8 *)(param_1 + 0x48);
    }
    uVar6 = 0;
    CProgressDialog::setRange(iVar8,0);
    if ((*(long *)(param_1 + 0x40) != 0) &&
       (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x40) + 4) != 0)) {
      uVar6 = *(undefined8 *)(param_1 + 0x48);
    }
    QObject::connect(&local_58,uVar6,"2canceled()",param_1,"1onDownloadCanceled()",0);
    if (local_58 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_58);
    lVar3 = *(long *)(param_1 + 0x40);
    iVar8 = 0;
    if (lVar3 == 0) goto LAB_1002b736c;
  }
  iVar8 = 0;
  if (*(int *)(lVar3 + 4) != 0) {
    iVar8 = (int)*(undefined8 *)(param_1 + 0x48);
  }
LAB_1002b736c:
  CProgressDialog::setValue(iVar8);
  QWidget::show();
  QWidget::raise();
  return;
}

