/*
    Copyright 2019-2022 Hydr8gon

    This file is part of NooDS.

    NooDS is free software: you can redistribute it and/or modify it
    under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    NooDS is distributed in the hope that it will be useful, but
    WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
    General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with NooDS. If not, see <https://www.gnu.org/licenses/>.
*/

#ifndef LAYOUT_DIALOG_H
#define LAYOUT_DIALOG_H

#include <wx/wx.h>

#include "noo_frame.h"

class LayoutDialog: public wxDialog
{
    public:
        LayoutDialog(NooFrame *frame);

    private:
        NooFrame *frame;

        int prevSettings[7];

        void rotateNone(wxCommandEvent &event);
        void rotateCw(wxCommandEvent &event);
        void rotateCcw(wxCommandEvent &event);
        void arrangeAuto(wxCommandEvent &event);
        void arrangeVert(wxCommandEvent &event);
        void arrangeHori(wxCommandEvent &event);
        void sizeEven(wxCommandEvent &event);
        void sizeTop(wxCommandEvent &event);
        void sizeBot(wxCommandEvent &event);
        void gapNone(wxCommandEvent &event);
        void gapQuart(wxCommandEvent &event);
        void gapHalf(wxCommandEvent &event);
        void gapFull(wxCommandEvent &event);
        void intScale(wxCommandEvent &event);
        void gbaCrop(wxCommandEvent &event);
        void filter(wxCommandEvent &event);
        void cancel(wxCommandEvent &event);
        void confirm(wxCommandEvent &event);

        wxDECLARE_EVENT_TABLE();
};

#endif // LAYOUT_DIALOG_H
