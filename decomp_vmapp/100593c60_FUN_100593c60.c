
void FUN_100593c60(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  if (param_1[0x223] != 0) {
    FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","dio_list_empty(&rd_dio_list)",
                  "Storage.cpp",0xd01,"~AsyncBlockReq");
  }
  if (param_1[0x225] != 0) {
    FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","dio_list_empty(&wr0_dio_list)",
                  "Storage.cpp",0xd02,"~AsyncBlockReq");
  }
  if (param_1[0x227] != 0) {
    FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","dio_list_empty(&wr1_dio_list)",
                  "Storage.cpp",0xd03,"~AsyncBlockReq");
  }
  if (*param_1 != 0) {
    FUN_1008e3970("","vdisk",0,"~AsyncBlockReq: lost dio complete");
    FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","0","Storage.cpp",0xd0a,
                  "~AsyncBlockReq");
  }
  if ((*(char *)((long)param_1 + 0x1115) != '\0') && ((void *)param_1[4] != (void *)0x0)) {
    _free((void *)param_1[4]);
  }
  lVar1 = param_1[0x229];
  plVar2 = (long *)param_1[0x22a];
  *(long **)(lVar1 + 8) = plVar2;
  *plVar2 = lVar1;
  param_1[0x229] = (long)(param_1 + 0x229);
  param_1[0x22a] = (long)(param_1 + 0x229);
  QWaitCondition::~QWaitCondition((QWaitCondition *)(param_1 + 0x22d));
  return;
}

