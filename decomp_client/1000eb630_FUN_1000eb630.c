
void * FUN_1000eb630(uint *param_1,uint param_2)

{
  void *pvVar1;
  uint uVar2;
  QImage local_68 [32];
  QImage local_48 [32];
  
  pvVar1 = (void *)0x0;
  if (param_1 != (uint *)0x0) {
    pvVar1 = operator_new(8);
    FUN_100ab71b0(pvVar1);
    FUN_1000ee120(local_48,param_1,param_2);
    FUN_100ab7660(pvVar1,local_48);
    QImage::~QImage(local_48);
    if ((param_2 & 2) != 0) {
      uVar2 = *param_1;
      if ((param_2 & 0x400) == 0) {
        uVar2 = uVar2 * param_1[1] * 4;
      }
      FUN_1000ee120(local_68,(long)param_1 + (ulong)uVar2 + 8);
      FUN_100ab7660(pvVar1,local_68);
      QImage::~QImage(local_68);
    }
  }
  return pvVar1;
}

