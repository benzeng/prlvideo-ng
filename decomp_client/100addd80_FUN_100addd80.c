
void FUN_100addd80(long param_1)

{
  FUN_100addde0(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x4c) = 0;
  QTimer::stop();
  FUN_100df99c0("CHRCLIENT","ChrToolClient",0,
                "*** Z-order queue stall - stub {%d;%d} did not respond in 10 seconds",
                *(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54));
  return;
}

