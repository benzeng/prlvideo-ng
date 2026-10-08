
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100244fc0(long param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  float fVar6;
  
  dVar4 = (double)_log((double)(DAT_100e152a0 / 1000));
  dVar4 = DAT_100e16ff0 / dVar4;
  iVar1 = *(int *)(param_1 + 0x58);
  fVar3 = (float)iVar1 * _DAT_100e16ff8;
  iVar2 = *(int *)(param_1 + 0x60) + 1;
  *(int *)(param_1 + 0x60) = iVar2;
  dVar5 = (double)_log((double)iVar2);
  fVar6 = (float)((double)(float)dVar4 * dVar5 + (double)fVar3);
  fVar3 = (float)(iVar1 + 1) * _DAT_100e16ff8;
  if (fVar6 <= fVar3) {
    fVar3 = fVar6;
  }
  *(int *)(param_1 + 0x5c) =
       (int)(((float)(100 - *(int *)(param_1 + 100)) * fVar3) / _DAT_100e16ffc) +
       *(int *)(param_1 + 100);
  if (-1 < iVar1) {
    FUN_100815b40(param_1,iVar1,(int)fVar3);
  }
  QTimer::start((int)*(undefined8 *)(param_1 + 0x50));
  return;
}

