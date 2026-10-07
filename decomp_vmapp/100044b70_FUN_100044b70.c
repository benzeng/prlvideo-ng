
bool FUN_100044b70(long param_1,undefined8 param_2,QString *param_3,long *param_4,undefined4 param_5
                  )

{
  char cVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  QDataStream local_70 [32];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  undefined4 local_34;
  
  local_50 = 0xe00000001;
  local_48 = 3;
  local_3c = 0;
  local_38 = *(int *)(*param_4 + 0xc) - *(int *)(*param_4 + 8);
  local_34 = 0;
  local_40 = param_5;
  plVar3 = operator_new(8);
  *plVar3 = (long)PTR_shared_null_100ba20d0;
  QDataStream::QDataStream(local_70,plVar3,2);
  QDataStream::writeRawData((char *)local_70,(int)&local_50);
  operator<<(local_70,param_3);
  lVar4 = *param_4;
  uVar5 = (ulong)*(uint *)(lVar4 + 8);
  lVar6 = 0;
  if ((int)*(uint *)(lVar4 + 8) < *(int *)(lVar4 + 0xc)) {
    do {
      operator<<(local_70,(QString *)(lVar4 + 0x10 + ((int)uVar5 + lVar6) * 8));
      lVar6 = lVar6 + 1;
      lVar4 = *param_4;
      uVar5 = (ulong)*(int *)(lVar4 + 8);
    } while (lVar6 < (long)((long)*(int *)(lVar4 + 0xc) - uVar5));
  }
  QDataStream::~QDataStream(local_70);
  lVar4 = *plVar3;
  uVar2 = FUN_100519800(param_1 + 0x38,param_2,*(long *)(lVar4 + 0x10) + lVar4,
                        *(undefined4 *)(lVar4 + 4),FUN_100044540,plVar3);
  cVar1 = FUN_100519210(uVar2);
  if (cVar1 == '\0') {
    FUN_1008e3970("SGAH","vm",0,"Error: failed to send request to client, code=%d",uVar2);
  }
  return cVar1 != '\0';
}

