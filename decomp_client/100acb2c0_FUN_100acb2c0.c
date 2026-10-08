
void FUN_100acb2c0(long param_1)

{
  QTimer::stop();
  if (0 < DAT_10230ffd0) {
    FUN_100df99c0("CHRCLIENT","ChrToolClient",1,
                  "CoherenceToolClient: Coherence Starting Timeout. m_bStartInProgress = %d",
                  *(undefined1 *)(param_1 + 0x81));
  }
  if (*(char *)(param_1 + 0x81) != '\0') {
    *(undefined1 *)(param_1 + 0x81) = 0;
    FUN_100acb230(param_1,6,0,0);
    FUN_100ae0ef0(param_1,4);
    return;
  }
  return;
}

