
void FUN_100136040(QComboBox *param_1,QWidget *param_2)

{
  int iVar1;
  Data *pDVar2;
  void *pvVar3;
  Data *pDVar4;
  long lVar5;
  undefined4 local_5c;
  Data *local_58;
  Connection local_50 [8];
  Connection local_48 [8];
  Connection local_40 [15];
  undefined1 local_31;
  
  QComboBox::QComboBox(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_1021fa028;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_1021fa1e8;
  pvVar3 = operator_new(0x40);
  FUN_100133b80(pvVar3,param_1);
  *(void **)(param_1 + 0x30) = pvVar3;
  param_1[0x38] = (QComboBox)0x0;
  QObject::connect(local_40,param_1,"2currentIndexChanged(int)",param_1,
                   "1onCurrentIndexChanged(int)",0);
  QMetaObject::Connection::~Connection(local_40);
  QObject::connect(local_48,*(undefined8 *)(param_1 + 0x30),"2aboutToHide()",param_1,
                   "1onAboutToHideMenu()",0);
  QMetaObject::Connection::~Connection(local_48);
  QObject::connect(local_50,*(undefined8 *)(param_1 + 0x30),"2triggered(QAction*)",param_1,
                   "1onMenuItemTriggered(QAction*)",0);
  QMetaObject::Connection::~Connection(local_50);
  FontUtils::setSmallFont((QWidget *)param_1,false);
  QWidget::setAttribute(param_1,0x4a,1);
  pvVar3 = operator_new(0x18);
  local_58 = (Data *)PTR_shared_null_1021e15e8;
  local_5c = 0x1f;
  FUN_100138150(&local_58,&local_5c);
  FUN_100137ad0(pvVar3,param_1,&local_58);
  pDVar2 = local_58;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) {
        return;
      }
      local_31 = 0;
    }
    iVar1 = *(int *)(local_58 + 0xc);
    if (iVar1 != *(int *)(local_58 + 8)) {
      lVar5 = (long)*(int *)(local_58 + 8) * 8 + (long)iVar1 * -8;
      pDVar4 = local_58 + (long)iVar1 * 8 + 8;
      do {
        if (*(void **)pDVar4 != (void *)0x0) {
          operator_delete(*(void **)pDVar4);
        }
        pDVar4 = pDVar4 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(pDVar2);
  }
  return;
}

