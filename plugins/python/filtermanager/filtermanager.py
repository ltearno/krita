'''
This script is licensed CC 0 1.0, so that you can learn from it.

------ CC 0 1.0 ---------------

The person who associated a work with this deed has dedicated the work to the public domain by waiving all of his or her rights to the work worldwide under copyright law, including all related and neighboring rights, to the extent allowed by law.

You can copy, modify, distribute and perform the work, even for commercial purposes, all without asking permission.

https://creativecommons.org/publicdomain/zero/1.0/legalcode
'''
import krita
from filtermanager import uifiltermanager


class FilterManagerExtension(krita.Extension):

    def __init__(self, parent):
        super(FilterManagerExtension, self).__init__(parent)

    def setup(self):
        action = krita.Krita.instance().createAction("filter_manager", "Filter Manager")
        action.setToolTip("Plugin to filters management")
        action.triggered.connect(self.initialize)

    def initialize(self):
        self.uifiltermanager = uifiltermanager.UIFilterManager()
        self.uifiltermanager.initialize()


Scripter.addExtension(FilterManagerExtension(krita.Krita.instance()))
