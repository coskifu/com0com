/*
 * $Id$
 *
 * Copyright (c) 2004-2005 Vyacheslav Frolov
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 *
 * $Log$
 * Revision 1.1  2005/01/26 12:18:54  vfrolov
 * Initial revision
 *
 *
 */

#include "precomp.h"

#if DBG

#define TOCODE2NAME1(s) { (ULONG)s, L#s }
#define TOCODE2NAME(p, s) { (ULONG)p##s, L#s }

CODE2NAME codeNameTableWaitMask[] = {
  TOCODE2NAME(SERIAL_EV_, RXCHAR),
  TOCODE2NAME(SERIAL_EV_, RXFLAG),
  TOCODE2NAME(SERIAL_EV_, TXEMPTY),
  TOCODE2NAME(SERIAL_EV_, CTS),
  TOCODE2NAME(SERIAL_EV_, DSR),
  TOCODE2NAME(SERIAL_EV_, RLSD),
  TOCODE2NAME(SERIAL_EV_, BREAK),
  TOCODE2NAME(SERIAL_EV_, ERR),
  TOCODE2NAME(SERIAL_EV_, RING),
  TOCODE2NAME(SERIAL_EV_, PERR),
  TOCODE2NAME(SERIAL_EV_, RX80FULL),
  TOCODE2NAME(SERIAL_EV_, EVENT1),
  TOCODE2NAME(SERIAL_EV_, EVENT2),
  {0, NULL}
};

CODE2NAME codeNameTablePurgeMask[] = {
  TOCODE2NAME(SERIAL_PURGE_, TXABORT),
  TOCODE2NAME(SERIAL_PURGE_, RXABORT),
  TOCODE2NAME(SERIAL_PURGE_, TXCLEAR),
  TOCODE2NAME(SERIAL_PURGE_, RXCLEAR),
  {0, NULL}
};

CODE2NAME codeNameTableIoctl[] = {
  TOCODE2NAME(IOCTL_SERIAL_, SET_BAUD_RATE),
  TOCODE2NAME(IOCTL_SERIAL_, SET_QUEUE_SIZE),
  TOCODE2NAME(IOCTL_SERIAL_, SET_LINE_CONTROL),
  TOCODE2NAME(IOCTL_SERIAL_, SET_BREAK_ON),
  TOCODE2NAME(IOCTL_SERIAL_, SET_BREAK_OFF),
  TOCODE2NAME(IOCTL_SERIAL_, IMMEDIATE_CHAR),
  TOCODE2NAME(IOCTL_SERIAL_, SET_TIMEOUTS),
  TOCODE2NAME(IOCTL_SERIAL_, GET_TIMEOUTS),
  TOCODE2NAME(IOCTL_SERIAL_, SET_DTR),
  TOCODE2NAME(IOCTL_SERIAL_, CLR_DTR),
  TOCODE2NAME(IOCTL_SERIAL_, RESET_DEVICE),
  TOCODE2NAME(IOCTL_SERIAL_, SET_RTS),
  TOCODE2NAME(IOCTL_SERIAL_, CLR_RTS),
  TOCODE2NAME(IOCTL_SERIAL_, SET_XOFF),
  TOCODE2NAME(IOCTL_SERIAL_, SET_XON),
  TOCODE2NAME(IOCTL_SERIAL_, GET_WAIT_MASK),
  TOCODE2NAME(IOCTL_SERIAL_, SET_WAIT_MASK),
  TOCODE2NAME(IOCTL_SERIAL_, WAIT_ON_MASK),
  TOCODE2NAME(IOCTL_SERIAL_, PURGE),
  TOCODE2NAME(IOCTL_SERIAL_, GET_BAUD_RATE),
  TOCODE2NAME(IOCTL_SERIAL_, GET_LINE_CONTROL),
  TOCODE2NAME(IOCTL_SERIAL_, GET_CHARS),
  TOCODE2NAME(IOCTL_SERIAL_, SET_CHARS),
  TOCODE2NAME(IOCTL_SERIAL_, GET_HANDFLOW),
  TOCODE2NAME(IOCTL_SERIAL_, SET_HANDFLOW),
  TOCODE2NAME(IOCTL_SERIAL_, GET_MODEMSTATUS),
  TOCODE2NAME(IOCTL_SERIAL_, GET_COMMSTATUS),
  TOCODE2NAME(IOCTL_SERIAL_, XOFF_COUNTER),
  TOCODE2NAME(IOCTL_SERIAL_, GET_PROPERTIES),
  TOCODE2NAME(IOCTL_SERIAL_, GET_DTRRTS),
  TOCODE2NAME(IOCTL_SERIAL_, LSRMST_INSERT),

  TOCODE2NAME(IOCTL_, SERENUM_EXPOSE_HARDWARE),
  TOCODE2NAME(IOCTL_, SERENUM_REMOVE_HARDWARE),
  TOCODE2NAME(IOCTL_, SERENUM_PORT_DESC),
  TOCODE2NAME(IOCTL_, SERENUM_GET_PORT_NAME),

  TOCODE2NAME(IOCTL_SERIAL_, CONFIG_SIZE),
  TOCODE2NAME(IOCTL_SERIAL_, GET_COMMCONFIG),
  TOCODE2NAME(IOCTL_SERIAL_, SET_COMMCONFIG),
  TOCODE2NAME(IOCTL_SERIAL_, GET_STATS),
  TOCODE2NAME(IOCTL_SERIAL_, CLEAR_STATS),
  TOCODE2NAME(IOCTL_SERIAL_, GET_MODEM_CONTROL),
  TOCODE2NAME(IOCTL_SERIAL_, SET_MODEM_CONTROL),
  TOCODE2NAME(IOCTL_SERIAL_, SET_FIFO_CONTROL),
  {0, NULL}
};

CODE2NAME codeNameTablePnp[] = {
  TOCODE2NAME(IRP_MN_, START_DEVICE),
  TOCODE2NAME(IRP_MN_, QUERY_REMOVE_DEVICE),
  TOCODE2NAME(IRP_MN_, REMOVE_DEVICE),
  TOCODE2NAME(IRP_MN_, CANCEL_REMOVE_DEVICE),
  TOCODE2NAME(IRP_MN_, STOP_DEVICE),
  TOCODE2NAME(IRP_MN_, QUERY_STOP_DEVICE),
  TOCODE2NAME(IRP_MN_, CANCEL_STOP_DEVICE),
  TOCODE2NAME(IRP_MN_, QUERY_DEVICE_RELATIONS),
  TOCODE2NAME(IRP_MN_, QUERY_INTERFACE),
  TOCODE2NAME(IRP_MN_, QUERY_CAPABILITIES),
  TOCODE2NAME(IRP_MN_, QUERY_RESOURCES),
  TOCODE2NAME(IRP_MN_, QUERY_RESOURCE_REQUIREMENTS),
  TOCODE2NAME(IRP_MN_, QUERY_DEVICE_TEXT),
  TOCODE2NAME(IRP_MN_, FILTER_RESOURCE_REQUIREMENTS),
  TOCODE2NAME(IRP_MN_, READ_CONFIG),
  TOCODE2NAME(IRP_MN_, WRITE_CONFIG),
  TOCODE2NAME(IRP_MN_, EJECT),
  TOCODE2NAME(IRP_MN_, SET_LOCK),
  TOCODE2NAME(IRP_MN_, QUERY_ID),
  TOCODE2NAME(IRP_MN_, QUERY_PNP_DEVICE_STATE),
  TOCODE2NAME(IRP_MN_, QUERY_BUS_INFORMATION),
  TOCODE2NAME(IRP_MN_, DEVICE_USAGE_NOTIFICATION),
  TOCODE2NAME(IRP_MN_, SURPRISE_REMOVAL),
#ifndef IRP_MN_QUERY_LEGACY_BUS_INFORMATION
  #define IRP_MN_QUERY_LEGACY_BUS_INFORMATION 0x18
#endif
  TOCODE2NAME(IRP_MN_, QUERY_LEGACY_BUS_INFORMATION),
  {0, NULL}
};

CODE2NAME codeNameTablePower[] = {
  TOCODE2NAME(IRP_MN_, WAIT_WAKE),
  TOCODE2NAME(IRP_MN_, POWER_SEQUENCE),
  TOCODE2NAME(IRP_MN_, SET_POWER),
  TOCODE2NAME(IRP_MN_, QUERY_POWER),
  {0, NULL}
};

CODE2NAME codeNameTableDoType[] = {
  TOCODE2NAME(C0C_DOTYPE_, FB),
  TOCODE2NAME(C0C_DOTYPE_, PP),
  TOCODE2NAME(C0C_DOTYPE_, FP),
  {0, NULL}
};

CODE2NAME codeNameTableModemStatus[] = {
  TOCODE2NAME(C0C_MSB_, CTS),
  TOCODE2NAME(C0C_MSB_, DSR),
  TOCODE2NAME(C0C_MSB_, RING),
  TOCODE2NAME(C0C_MSB_, RLSD),
  {0, NULL}
};

CODE2NAME codeNameTableControlHandShake[] = {
  TOCODE2NAME(SERIAL_, DTR_CONTROL),
  TOCODE2NAME(SERIAL_, DTR_HANDSHAKE),
  TOCODE2NAME(SERIAL_, CTS_HANDSHAKE),
  TOCODE2NAME(SERIAL_, DSR_HANDSHAKE),
  TOCODE2NAME(SERIAL_, DCD_HANDSHAKE),
  TOCODE2NAME(SERIAL_, DSR_SENSITIVITY),
  TOCODE2NAME(SERIAL_, ERROR_ABORT),
  {0, NULL}
};

CODE2NAME codeNameTableFlowReplace[] = {
  TOCODE2NAME(SERIAL_, AUTO_TRANSMIT),
  TOCODE2NAME(SERIAL_, AUTO_RECEIVE),
  TOCODE2NAME(SERIAL_, ERROR_CHAR),
  TOCODE2NAME(SERIAL_, NULL_STRIPPING),
  TOCODE2NAME(SERIAL_, BREAK_CHAR),
  TOCODE2NAME(SERIAL_, RTS_CONTROL),
  TOCODE2NAME(SERIAL_, RTS_HANDSHAKE),
  TOCODE2NAME(SERIAL_, XOFF_CONTINUE),
  {0, NULL}
};

CODE2NAME codeNameTableStatus[] = {
  TOCODE2NAME(STATUS_, ACCESS_DENIED),
  TOCODE2NAME(STATUS_, BUFFER_TOO_SMALL),
  TOCODE2NAME(STATUS_, CANCELLED),
  TOCODE2NAME(STATUS_, INSUFFICIENT_RESOURCES),
  TOCODE2NAME(STATUS_, INSUFFICIENT_RESOURCES),
  TOCODE2NAME(STATUS_, INVALID_DEVICE_REQUEST),
  TOCODE2NAME(STATUS_, INVALID_PARAMETER),
  TOCODE2NAME(STATUS_, NO_SUCH_DEVICE),
  TOCODE2NAME(STATUS_, NOT_SUPPORTED),
  TOCODE2NAME(STATUS_, PENDING),
  TOCODE2NAME(STATUS_, SUCCESS),
  TOCODE2NAME(STATUS_, TIMEOUT),
  TOCODE2NAME(STATUS_, UNSUCCESSFUL),
  TOCODE2NAME(STATUS_, OBJECT_NAME_NOT_FOUND),
  {0, NULL}
};

CODE2NAME codeNameTableIrpMj[] = {
  TOCODE2NAME(IRP_MJ_, CREATE),
  TOCODE2NAME(IRP_MJ_, CREATE_NAMED_PIPE),
  TOCODE2NAME(IRP_MJ_, CLOSE),
  TOCODE2NAME(IRP_MJ_, READ),
  TOCODE2NAME(IRP_MJ_, WRITE),
  TOCODE2NAME(IRP_MJ_, QUERY_INFORMATION),
  TOCODE2NAME(IRP_MJ_, SET_INFORMATION),
  TOCODE2NAME(IRP_MJ_, QUERY_EA),
  TOCODE2NAME(IRP_MJ_, SET_EA),
  TOCODE2NAME(IRP_MJ_, FLUSH_BUFFERS),
  TOCODE2NAME(IRP_MJ_, QUERY_VOLUME_INFORMATION),
  TOCODE2NAME(IRP_MJ_, SET_VOLUME_INFORMATION),
  TOCODE2NAME(IRP_MJ_, DIRECTORY_CONTROL),
  TOCODE2NAME(IRP_MJ_, FILE_SYSTEM_CONTROL),
  TOCODE2NAME(IRP_MJ_, DEVICE_CONTROL),
  TOCODE2NAME(IRP_MJ_, INTERNAL_DEVICE_CONTROL),
  TOCODE2NAME(IRP_MJ_, SHUTDOWN),
  TOCODE2NAME(IRP_MJ_, LOCK_CONTROL),
  TOCODE2NAME(IRP_MJ_, CLEANUP),
  TOCODE2NAME(IRP_MJ_, CREATE_MAILSLOT),
  TOCODE2NAME(IRP_MJ_, QUERY_SECURITY),
  TOCODE2NAME(IRP_MJ_, SET_SECURITY),
  TOCODE2NAME(IRP_MJ_, POWER),
  TOCODE2NAME(IRP_MJ_, SYSTEM_CONTROL),
  TOCODE2NAME(IRP_MJ_, DEVICE_CHANGE),
  TOCODE2NAME(IRP_MJ_, QUERY_QUOTA),
  TOCODE2NAME(IRP_MJ_, SET_QUOTA),
  TOCODE2NAME(IRP_MJ_, PNP),
  {0, NULL}
};

CODE2NAME codeNameTableRelations[] = {
  TOCODE2NAME1(BusRelations),
  TOCODE2NAME1(EjectionRelations),
  TOCODE2NAME1(PowerRelations),
  TOCODE2NAME1(RemovalRelations),
  TOCODE2NAME1(TargetDeviceRelation),
  {0, NULL}
};

CODE2NAME codeNameTableBusQuery[] = {
  TOCODE2NAME(BusQuery, DeviceID),
  TOCODE2NAME(BusQuery, HardwareIDs),
  TOCODE2NAME(BusQuery, CompatibleIDs),
  TOCODE2NAME(BusQuery, InstanceID),
  TOCODE2NAME(BusQuery, DeviceSerialNumber),
  {0, NULL}
};

CODE2NAME codeNameTableDeviceText[] = {
  TOCODE2NAME(DeviceText, Description),
  TOCODE2NAME(DeviceText, LocationInformation),
  {0, NULL}
};

#else /* DBG */
  #pragma warning(disable:4206) // nonstandard extension used : translation unit is empty
#endif /* DBG */