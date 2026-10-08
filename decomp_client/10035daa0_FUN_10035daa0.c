
void FUN_10035daa0(long param_1,int param_2)

{
  if ((*(int *)(param_1 + 0x80) != param_2) && (2 < DAT_10230ffd0)) {
    FUN_100df99c0("[HID_CTL]","prl_client_app",3,
                  "Updating mouse button cache. Old state: <%d>, new state: <%d>",
                  *(int *)(param_1 + 0x80),param_2);
  }
  *(int *)(param_1 + 0x80) = param_2;
  return;
}

