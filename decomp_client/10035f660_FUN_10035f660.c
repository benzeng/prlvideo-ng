
void FUN_10035f660(long param_1)

{
  long lVar1;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  QCursor local_50 [8];
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined8 local_30;
  
  if (3 < DAT_10230ffd0) {
    FUN_100df99c0("[CURSOR_CTL]","prl_client_app",4,"Cursor updated.");
  }
  uVar4 = FUN_10035da40(*(undefined8 *)(param_1 + 0x18));
  FUN_10035eb30(local_50,param_1 + 0x40,uVar4);
  QCursor::operator=((QCursor *)(param_1 + 0x20),local_50);
  *(undefined1 *)(param_1 + 0x38) = local_38;
  *(undefined8 *)(param_1 + 0x30) = local_40;
  *(undefined8 *)(param_1 + 0x28) = local_48;
  QCursor::~QCursor(local_50);
  cVar3 = FUN_10035ddf0(*(undefined8 *)(param_1 + 0x18),0);
  if (cVar3 != '\0') {
    if (*(int *)(param_1 + 0x48) == 2) {
      lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
      lVar2 = *(long *)(*(long *)(lVar1 + 0x18) + 0x48);
      if ((((lVar2 != 0) && (*(int *)(lVar2 + 4) != 0)) &&
          (lVar2 = *(long *)(*(long *)(lVar1 + 0x18) + 0x50), lVar2 != 0)) &&
         (*(char *)(lVar1 + 0x38) == '\0')) {
        local_30 = *(undefined8 *)(lVar1 + 0x28);
        FUN_10035f480(lVar1,lVar2,&local_30,1);
      }
    }
    FUN_10035f890(*(long *)(param_1 + 0x10));
  }
  FUN_100832460(*(undefined8 *)(param_1 + 0x10),(QCursor *)(param_1 + 0x20));
  return;
}

