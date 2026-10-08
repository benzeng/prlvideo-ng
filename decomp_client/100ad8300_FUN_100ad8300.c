
void FUN_100ad8300(long param_1,long *param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  long *plVar5;
  Data *pDVar6;
  Data *local_48;
  undefined8 local_40;
  undefined1 local_31;
  
  local_40 = param_3;
  cVar3 = FUN_100acadf0(*(undefined8 *)(param_1 + 0x10),1);
  if (cVar3 != '\0') {
    (**(code **)(**(long **)(param_1 + 0xa30) + 0x60))(*(long **)(param_1 + 0xa30),param_3);
    lVar2 = *param_2;
    iVar1 = *(int *)(lVar2 + 4);
    iVar4 = QString::compare_helper(lVar2 + *(long *)(lVar2 + 0x10),iVar1,"--fakestub",0xffffffff,1)
    ;
    if ((*(char *)(*(long *)(param_1 + 0xa30) + 0x10) != '\0') ||
       (*(char *)(param_1 + 0xaa6) != '\0')) {
      plVar5 = (long *)FUN_100adb590(param_1 + 0x100,*(undefined4 *)(param_1 + 0x910));
      lVar2 = *plVar5;
      if ((lVar2 != 0) &&
         ((*(int *)(lVar2 + 0x3c) == (int)((ulong)param_3 >> 0x20) &&
          (*(int *)(lVar2 + 0x38) == (int)param_3)))) {
        *(undefined1 *)(param_1 + 0xad2) = 1;
      }
    }
    FUN_100adbfc0(&local_48,param_1 + 0x100,&local_40);
    if (*(int *)(local_48 + 8) != *(int *)(local_48 + 0xc)) {
      pDVar6 = local_48 + (long)*(int *)(local_48 + 8) * 8 + 0x10;
      do {
        lVar2 = *(long *)pDVar6;
        *(undefined8 *)(lVar2 + 0x38) = 0;
        FUN_100adc090(param_1 + 0x100,*(undefined4 *)(lVar2 + 8),0);
        pDVar6 = pDVar6 + 8;
      } while (pDVar6 != local_48 + (long)*(int *)(local_48 + 0xc) * 8 + 0x10);
    }
    if (iVar1 == 0 || iVar4 == 0) {
      QTimer::stop();
    }
    else {
      QTimer::start();
    }
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        if (*(int *)local_48 != 0) {
          return;
        }
        local_31 = 0;
      }
      QListData::dispose(local_48);
    }
  }
  return;
}

