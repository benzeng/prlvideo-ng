
void FUN_1002cf1d0(long param_1)

{
  long lVar1;
  int iVar2;
  
  FUN_1002cec10();
  lVar1 = *(long *)(param_1 + 0x28);
  iVar2 = QString::compare_helper
                    (*(long *)(lVar1 + 0x10) + lVar1,*(undefined4 *)(lVar1 + 4),
                     "Parallels Virtual PDF Printer",0xffffffff,1);
  FUN_100d6f130(param_1 + 0x60,iVar2 == 0);
  if (((*(long *)(param_1 + 0x50) != 0) && (*(int *)(*(long *)(param_1 + 0x50) + 4) != 0)) &&
     (*(long *)(param_1 + 0x58) != 0)) {
    QWidget::close();
  }
  CAbstractTask::finish((int)param_1);
  return;
}

