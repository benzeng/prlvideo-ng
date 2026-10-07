
undefined1 FUN_1004065e0(long param_1,QString *param_2,char param_3)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  long lVar4;
  QFileInfo local_30 [8];
  
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x18) = 2;
  QFileInfo::QFileInfo(local_30,param_2);
  cVar1 = QFileInfo::exists();
  if (cVar1 == '\0') {
    if (param_3 == '\0') {
      uVar3 = FUN_100768f60();
      *(undefined4 *)(param_1 + 0x20) = uVar3;
      uVar2 = 0;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    cVar1 = FUN_100768ef0(param_2);
    if (cVar1 == '\0') {
      if (param_3 == '\0') {
        *(undefined4 *)(param_1 + 0x20) = 0x80000000;
        uVar2 = 0;
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      (**(code **)(**(long **)(param_1 + 8) + 0x18))(*(long **)(param_1 + 8),param_2,3,0,0,0);
      cVar1 = (**(code **)(**(long **)(param_1 + 8) + 0x98))();
      if (cVar1 == '\0') {
        *(undefined1 *)(param_1 + 0x1c) = 1;
        (**(code **)(**(long **)(param_1 + 8) + 0x18))(*(long **)(param_1 + 8),param_2,1,1,0,0);
      }
      cVar1 = (**(code **)(**(long **)(param_1 + 8) + 0x98))();
      if (cVar1 != '\0') {
        lVar4 = QFileInfo::size();
        *(int *)(param_1 + 0x28) = (int)(((ulong)(lVar4 >> 0x3f) >> 0x37) + lVar4 >> 9);
        *(undefined4 *)(param_1 + 0x18) = 1;
      }
      uVar3 = FUN_100768f60();
      *(undefined4 *)(param_1 + 0x20) = uVar3;
      uVar2 = (**(code **)(**(long **)(param_1 + 8) + 0x98))();
    }
  }
  QFileInfo::~QFileInfo(local_30);
  return uVar2;
}

