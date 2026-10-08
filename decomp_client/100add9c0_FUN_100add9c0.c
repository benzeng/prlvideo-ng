
void FUN_100add9c0(long param_1,int param_2)

{
  if (*(int *)(param_1 + 0x4c) == param_2) {
    FUN_100adda10();
    return;
  }
  if (DAT_10230ffd0 < 2) {
    return;
  }
  FUN_100df99c0("CHRCLIENT","ChrToolClient",2,
                "CZorderEventsQueue::Response(id=%d) not equal waited id (%d)");
  return;
}

