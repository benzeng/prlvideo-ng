
/* CBaseNodeSignals::disconnectNotify(QMetaMethod const&) */

void CBaseNodeSignals::disconnectNotify(QMetaMethod *param_1)

{
  if (0 < (int)param_1[0xd].field1_0x8) {
    param_1[0xd].field1_0x8 = param_1[0xd].field1_0x8 - 1;
  }
  return;
}

