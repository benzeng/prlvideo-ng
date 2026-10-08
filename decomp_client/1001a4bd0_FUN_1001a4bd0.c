
void FUN_1001a4bd0(QWizardPage *param_1,QWidget *param_2)

{
  QArrayData *local_28;
  undefined1 local_1b;
  
  QWizardPage::QWizardPage(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_1021fdd30;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_1021fdf28;
  *(undefined **)(param_1 + 0x30) = PTR_shared_null_1021e15e8;
  local_28 = (QArrayData *)QString::fromAscii_helper(":/pixmaps/wizard_background.png",0x1f);
  QPixmap::QPixmap((QPixmap *)(param_1 + 0x38),&local_28,0,0);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return;
      }
      local_1b = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return;
}

