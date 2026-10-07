
void FUN_100258400(long param_1)

{
  QMutex::QMutex((QMutex *)(param_1 + 0x10),0);
  QWaitCondition::QWaitCondition((QWaitCondition *)(param_1 + 0x18));
  *(long *)param_1 = param_1;
  *(long *)(param_1 + 8) = param_1;
  return;
}

