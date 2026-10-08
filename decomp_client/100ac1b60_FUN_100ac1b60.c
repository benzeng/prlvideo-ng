
void FUN_100ac1b60(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  if (((*(long *)(param_1 + 8) != 0) && (*(int *)(*(long *)(param_1 + 8) + 4) != 0)) &&
     (*(long *)(param_1 + 0x10) != 0)) {
    QMetaObject::invokeMethod
              (*(long *)(param_1 + 0x10),"onPathsResolved",2,0,0,param_6,param_1 + 0x18,"UINT32",
               param_1 + 0x1c,"const QuickLookRect &",param_3,"const QList<TResolvedPath> &",
               param_1 + 0x2c,"UINT32",0,0,0,0,0,0,0,0,0,0,0,0);
  }
  return;
}

