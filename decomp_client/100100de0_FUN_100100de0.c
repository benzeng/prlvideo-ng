
void FUN_100100de0(long param_1,undefined8 param_2,int param_3)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  uint *puVar4;
  uint *puVar5;
  uint *local_60;
  uint *local_58;
  long local_50;
  QString local_48;
  undefined1 local_40 [16];
  
  cVar2 = MessageUtils::isMessageHidden(0x3c80);
  plVar1 = (long *)(param_1 + 0x10);
  FUN_100101ff0(&local_48,plVar1);
  if (param_3 != 0) {
    lVar3 = FUN_100deef90(local_40);
    local_50 = lVar3;
    FUN_1000c5610(&local_50,&local_48);
    if (lVar3 != 0) {
      _CFRelease(lVar3);
    }
  }
  if (cVar2 != '\0') {
    MessageUtils::restoreHiddenMessage(0x3c80);
    puVar4 = (uint *)*plVar1;
    if (1 < *puVar4) {
      FUN_1001020d0(plVar1,puVar4[1]);
      puVar4 = (uint *)*plVar1;
    }
    puVar5 = puVar4 + (long)(int)puVar4[2] * 2 + 4;
    while( true ) {
      if (1 < *puVar4) {
        FUN_1001020d0(plVar1,puVar4[1]);
        puVar4 = (uint *)*plVar1;
      }
      if (puVar5 == puVar4 + (long)(int)puVar4[3] * 2 + 4) break;
      cVar2 = operator==(*(QString **)puVar5,&local_48);
      if (cVar2 == '\0') {
        puVar5 = puVar5 + 2;
        puVar4 = (uint *)*plVar1;
      }
      else {
        local_60 = puVar5;
        FUN_1001014b0(&local_58,plVar1,&local_60);
        puVar4 = (uint *)*plVar1;
        puVar5 = local_58;
      }
    }
    FUN_1000341d0(param_1 + 0x18,&local_48);
    FUN_100100f60(param_1);
  }
  if (*(int *)(*plVar1 + 0xc) != *(int *)(*plVar1 + 8)) {
    FUN_100100400(param_1);
  }
  FUN_100101550(&local_48);
  return;
}

